#include<iostream>
using namespace std;
struct node
{
    node* prev;
    int info;
    node* next;
};
node* inserting(node** start, node** last)
{

    node* temp1 = new(node);
    cout<<"enter value"<<endl;
    cin>>temp1->info;
    temp1->next = NULL;
    temp1 -> prev = NULL;
    if(*start == NULL)
    {
        *start = new(node);
        *start = temp1;
        *last = new(node);
        *last = temp1;
    }
    else
    {

        temp1->next = *start;
        (*start) -> prev = temp1;
        *start = temp1;
    }


}
void display(node* start,node* last)
{
    node* temp1 = new(node);
    temp1 = start;
    if(temp1==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    cout<<"your list"<<endl;
    cout<<"start";
    while(temp1 != NULL)
    {
        cout<<"->"<<temp1 -> info;
        temp1 = temp1->next;
    }
    cout<<"->NULL"<<endl;
    node* temp2 = new(node);
    temp2 = last;
    if(temp2 == NULL)
    {
        cout<<"liist is empty"<<endl;
    }

    cout<<"your list"<<endl;
    cout<<"last";
    while(temp2 != NULL)
    {
        cout<<"->"<<temp2 -> info;
        temp2 = temp2->prev;
    }
    cout<<"->NULL"<<endl;

}
node* deleting(node* start)
{
    node* temp1 = start;
    node* temp2 = start;
    node* temp3 = start;
    cout<<"enter element which you want to delete"<<endl;
    int d;
    cin>>d;
    while(temp1->info != d)
    {
        temp2 = temp1;
        temp1 = temp1 -> next;
    }
    cout<<d<<endl;
    temp2->next = temp1 ->next;
    temp3 = temp1->next;
    temp3->prev = temp2;


}
int main()
{
    struct node* start = new(node);
    start = NULL;
    struct node* last = new(node);
    last = NULL;
    cout<<"press 1 for create doubly list"<<endl;
    cout<<"press 2 for display linked list"<<endl;
    cout<<"press 3 for delete element in linked list from given position"<<endl;
    cout<<"press 4 for insert at begin of doubly list"<<endl;
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
        inserting(&start,&last);
        break;
    case 2:
        display(start,last);
        break;
    case 3:
        deleting(start);
        break;
    case 4:
        inserting(&start,&last);
        break;
    }
    }
    return 0;
}

