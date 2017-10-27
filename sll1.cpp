#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
node* inserting(struct node* start)
{
    node* temp1 = new(node);
    cout<<"enter value"<<endl;
    cin>>temp1 -> data;
    temp1 -> next = NULL;
    if(start == NULL)
    {
        start = new(node);
        start = temp1;
        return start;
    }
    else{
        temp1 -> next = start;
        start = temp1;
        return start;
    }

}
int display(struct node* start)
{
    if(start == NULL)
    {
        cout<<"list is empty"<<endl;
        return 0;
    }
    node* temp1 = new(node);
    temp1 = start;
    while(temp1 != NULL)
    {
        cout<<"data: "<<temp1 -> data<<endl;
        temp1 = temp1 -> next;
    }
    return 0;
}
int insert_at_end(struct node* start)
{
    if(start == NULL)
    {
        cout<<"list is empty"<<endl;
        return 0;
    }
    node* temp1 = new(node);
    node* temp2 = new(node);
    temp1 = start;
    cout<<"enter data"<<endl;
    cin>>temp2->data;
    temp2->next = NULL;
    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp2;
    return 0;
}
int deleting(struct node* start)
{
     node* temp1 = new(node);
     node* temp2 = new(node);
    temp1 = start;
    cout<<"at which position you want to delete"<<endl;
    int loc;
    cin>>loc;
    loc = loc - 1;
    while(loc--)
    {
        temp2 = temp1;
        temp1 = temp1-> next;
    }
    temp2 = temp1 -> next;
    cout<<temp1->data<<endl;
    delete(temp1);
}
main()
{
    struct node* start = new(node);
    start = NULL;
    cout<<"press 1 for insert node at begin"<<endl;
    cout<<"press 2 for display linked list"<<endl;
    cout<<"press 3 for inserting at end"<<endl;
    cout<<"press 4 for delete element in linked list from given position"<<endl;
    int choice = 0;
    while(1)
    {
    cout<<"_____________________"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    cout<<"_____________________"<<endl;
    switch(choice)
    {
    case 1:
        start = inserting(start);
        break;
    case 2:
        display(start);
        break;
    case 3:
        insert_at_end(start);
        break;
    case 4:
        deleting(start);
    }
    }
    return 0;
}


