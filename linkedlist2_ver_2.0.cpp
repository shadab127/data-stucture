#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node
{
    int data;
    char name[10];
    struct node* next;
};
int inserting(struct node* start)
{

    struct node* temp = (struct node*) malloc(sizeof(struct node));
    struct node* s = (struct node*) malloc(sizeof(struct node));
    s = start;
    if(temp == NULL || s == NULL)
    {
        cout<<"fuck";
        getch();
    }
    cout<<"enter data"<<endl;
    cin>>temp -> data;
     cout<<"enter name"<<endl;
     cin>>temp -> name;
    temp -> next = NULL;
    while(s -> next != NULL)
    {
        s = s -> next;
    }
    s -> next = temp;
    return 0;
}
int insert_at_any_point(struct node* start)
{
    cout<<"enter position at which you want to enter new node"<<endl;
    struct node* xx = (struct node*) malloc(sizeof(node));
    struct node* xy = (struct node*) malloc(sizeof(node));
    xx = start;
    if(xx ->  next == NULL)
    {
        cout <<"list is empty"<<endl;
        return 0;
    }
    int pos;
    cin>>pos;
    pos -=1;
    while(pos--)
    {
        xx = xx -> next;
    }
    cout<<"enter value"<<endl;
    cin>>xy -> data;
    cout<<"enter name"<<endl;
    cin>>xy -> name;
    xy ->next = xx-> next;
    xx ->next = xy;
}
int display(struct node* start)
{
    struct node* t = (struct node*) malloc(sizeof(struct node));
    t = start;
    cout<<"your linked list"<<endl;
    if(t->next == NULL)
    {
    cout<<"linked list empty"<<endl;
    return 0;
    }
    while(t -> next != NULL)
    {
        t = t -> next;
    int value = t ->data;
    cout<<value<<endl;
    cout<<t -> name<<endl;

    }
    return 0;
}
int deleting(struct node* start)
{
    struct node* alpha = (struct node*) malloc(sizeof(struct node));
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp = start;
    cout<<"at which position you want to delete"<<endl;
    int del;
    cin>>del;
    del -= 1;
    for(int i = 0;i < del;i++)
    {
        temp = temp -> next;
    }
    alpha = temp -> next;
    temp -> next = alpha -> next;
    cout<<"element deleted"<<endl;

}
main()
{
    struct node* start = (struct node*) malloc(sizeof(struct node));
    start -> data = 10;
    start -> next = NULL;
    cout<<"press 1 for insert node"<<endl;
    cout<<"press 2 for display linked list"<<endl;
    cout<<"press 3 for inserting at user defined place in linked list"<<endl;
    cout<<"press 4 for delete element in linked list from given position"<<endl;
    int choice;
    while(1)
    {
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        inserting(start);
        break;
    case 2:
        display(start);
        break;
    case 3:
        insert_at_any_point(start);
        break;
    case 4:
        deleting(start);
    }
    }
    return 0;
}
