#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node *next;
}*start;

class single_llist
{
    public:
        node* create_node(int);
        void insert_last();
        void insert_begin();
        void delete_pos();
        void display();
        single_llist()
        {
            start = NULL;
        }
};
main()
{
    int choice, nodes, element,position,i;
    single_llist sl;
    start = NULL;
    while (1)
    {
        cout<<endl<<"_____________________________________"<<endl;
        cout<<endl<<"operations on singly linked list"<<endl;
        cout<<endl<<"_____________________________________"<<endl;
        cout<<"1.Insert node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node at position"<<endl;
        cout<<"4.Sort link list"<<endl;
        cout<<"5.Delete a particular node"<<endl;
        cout<<"6.Update node value"<<endl;
        cout<<"7.Search element"<<endl;
        cout<<"8.Display linked list"<<endl;
        cout<<"9.Reverse linked list"<<endl;
        cout<<"10.Exit  "<<endl;
        cout<<"Enter your choice :  ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Inserting node at beginning:  "<<endl;
            sl.insert_begin();
            cout<<endl;
            break;

        case 2:
            cout<<"Inserting node at last: "<<endl;
            sl.insert_last();
            cout<<endl;
            break;
        case 8:
            cout <<"Display elements of link list"<<endl;
            sl.display();
            cout <<endl;
            break;
        }
    }
}
node *single_llist::create_node(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
    if ( temp == NULL)
    {
        cout << "Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}
void single_llist::insert_last()
{
    int value;
    cout<<"enter the value to be inseerted:  ";
    cin>>value;
    struct node *temp, *s;
    temp = create_node(value);
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    temp->next = NULL;
    s->next = temp;
    cout <<"Element inserted at last"<<endl;
}
void single_llist::display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"The list is empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout <<temp -> info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void single_llist::insert_begin()
{
    int value;
    cout<<"enter the value to be inserted: ";
    cin>> value;
    struct node *temp,*p;
    temp = create_node(value);
    if(start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = temp;
        start -> next = NULL;
    }
    cout<<"Element inserted at beginning"<<endl;
}
