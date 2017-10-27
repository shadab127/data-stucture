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
node* insert_at_end(node* start)
{
    node* temp1 = new(node);
    node* temp2 = new(node);
    cout<<"enter value"<<endl;
    cin>>temp2->info;
    temp2->next = NULL;
    temp1 = start;
    if(temp1 == NULL)
    {
        start = new(node);
        start = temp2;
        return start;
    }
    else{
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp2;
        return start;
    }
}
node* deleting(node* start)
{
    node* temp1 = new(node);
    node* temp2 = new(node);
    temp1 = start;
    if(temp1==NULL)
    {
        cout<<"list is empty"<<endl;
        return 0;
    }
    else{
        cout<<"at which position you want to delete: "<<endl;
        int loc;
        cin>>loc;
        if(loc == 1)
        {
            start = temp1->next;
            return start;
        }
        if(loc > 1)
        {
            for(int i = 1; i < loc; i++)
            {
                temp2 = temp1;
                temp1 = temp1 -> next;
                if(temp1 == NULL)
                {
                    cout<<"list limit reached try again"<<endl;
                    return start;
                }
            }
            temp2->next = temp1 -> next;
            delete(temp1);
        }
    }
    return start;
}
node* reversing(node* start)
{
    node* temp = NULL;
    node* prev = NULL;
    node* curr = start;
    while(curr != NULL)
    {
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    curr = prev;
    start = curr;
    return start;

}
int main()
{
    struct node* start = new(node);
    start = NULL;
    cout<<"press 1 for insert node at begin"<<endl;
    cout<<"press 2 for display linked list"<<endl;
    cout<<"press 3 for inserting at end"<<endl;
    cout<<"press 4 for delete element in linked list from given position"<<endl;
    cout<<"press 5 for reversing"<<endl;
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
        start = insert_at_end(start);
        break;
    case 4:
        start = deleting(start);
        break;
    case 5:
        start = reversing(start);
        break;
    }
    }
    return 0;
}
