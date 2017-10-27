#include<iostream>
using namespace std;
struct node
{
    int info;
    node* next;
};
node* inserting(node* start)
{

    node* temp1 = new(node);
    cout<<"enter value"<<endl;
    cin>>temp1->info;
    temp1->next = NULL;
    if(start == NULL)
    {
        start = new(node);
        start = temp1;
        return start;
    }
    else{
        temp1->next = start;
        start = temp1;
        return start;
    }

}
void display(node* start)
{
    node* temp1 = new(node);
    temp1 = start;
    if(temp1==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    cout<<"your list"<<endl;
    cout<<"start";
    while(temp1 != NULL)
    {
        cout<<"->"<<temp1 -> info;
        temp1 = temp1->next;
    }
    cout<<"->NULL"<<endl;
}
node* reversing(node* start)
{

}
int main()
{
    struct node* start = new(node);
    start = NULL;
    cout<<"press 1 for insert node at begin"<<endl;
    cout<<"press 2 for display linked list"<<endl;
    cout<<"press 3 for reverse linked list"<<endl;
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
        reversing(start);
        break;
    }
    }
}
