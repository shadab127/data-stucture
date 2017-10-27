#include<iostream>
using namespace std;
struct node
{
    int coeff;
    int expo;
    node* next;
};
node* inserting(node* start,int coeff,int expo)
{

    node* temp1 = new(node);
    temp1->coeff = coeff;
    temp1->expo = expo;
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
    cout<<"start->";
    while(temp1 != NULL)
    {
        cout<<temp1 -> coeff;
        cout<<"x^"<<temp1->expo<<"+";
        temp1 = temp1->next;
    }
    cout<<"\b->NULL"<<endl;
}
node* adding(node* start1 , node* start2,node* start3)
{
     node* temp1 = start1;
     node* temp2 = start2;
     while(temp1 != NULL)
     {
         while(temp2 != NULL)
         {
            if(temp1->expo == temp2->expo)
            {
                start = inserting(start3,temp1->coff + temp2->coeff,temp1->expo);
            }
         }
     }
}
int main()
{
    int coeff,expo;
    struct node* start1 = new(node);
    start1 = NULL;
    struct node* start2 = new(node);
    start2 = NULL;
    struct node* start3 = new(node);
    start3 = NULL;
    cout<<"press 1 for insert poly1"<<endl;
    cout<<"press 2 for display poly1"<<endl;
    cout<<"press 3 for insert poly2"<<endl;
    cout<<"press 4 for display poly2"<<endl;
    cout<<"press 5  for addition"<<endl;
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
        cout<<"enter coff"<<endl;
        cin>>coeff;
        cout<<"enter expo"<<endl;
        cin>>expo;
        start1 = inserting(start1,coeff,expo);
        break;
    case 2:
        display(start1);
        break;
    case 3:
        cout<<"enter coff"<<endl;
        cin>>coeff;
        cout<<"enter expo"<<endl;
        cin>>expo;
        start2 = inserting(start2,coeff,expo);
        break;
    case 4:
        display(start2);
        break;
    case 5:
        start3 = adding(start1,start2,start3)
        break;
    }
    }
}
