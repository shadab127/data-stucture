#include<iostream>
#include<string>
using namespace std;
struct node
{
    int roll_no;
    string name;
    float percent;
    node* next;
};
node* inserting(node* start)
{
    node* temp1 = new(node);
    node* temp2 = new(node);
    cout<<"enter roll_no :"<<endl;
    cin>>temp1->roll_no;
    cout<<"enter name :"<<endl;
    cin>>temp1->name;
    cout<<"enter percentege of student :"<<endl;
    cin>>temp1->percent;
    temp1->next = start;
    if(start == NULL)
    {
        temp1->next = temp1;
        return temp1;
    }
    temp2 = start;
    while(temp2->next != start)
    {
        temp2 = temp2 -> next;
    }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
    return start;
}
int disp(node* start)
{
    node* temp = start;
    while(temp->next != start)
    {
        cout<<"Rollno. :"<<temp->roll_no<<" & Name :"<<temp->name<<" & percentage :"<<temp->percent<<endl;
        temp = temp->next;
    }
        cout<<"Rollno. :"<<temp->roll_no<<" & Name :"<<temp->name<<" & Percentage :"<<temp->percent<<endl;
}
node* inserting_pos(node* start)
{
    node* temp1 = new(node);
    node* temp2 = start;
    cout<<"enter roll_no :"<<endl;
    cin>>temp1->roll_no;
    cout<<"enter name :"<<endl;
    cin>>temp1->name;
    cout<<"enter percentege of student :"<<endl;
    cin>>temp1->percent;
    temp1->next = start;
    if(start == NULL)
    {
        temp1->next = temp1;
        return temp1;
    }
    cout<<"enter roll_no. after which you want to insert"<<endl;
    int r;cin>>r;
    while(temp2 -> roll_no != r)
    {
        temp2 = temp2 -> next;
    }
    temp1 -> next = temp2 ->next;
    temp2 -> next = temp1;
    return start;
}
node* delet_e(node* start)
{
    node* temp1 = start;
    cout<<"enter which roll_no. you want to delete"<<endl;
    int r ;cin>>r;
    while((temp1->next)-> roll_no != r)
    {
        temp1 = temp1 -> next;
    }
    node* temp2 = temp1 -> next;
    temp1->next = (temp1->next)->next;
    delete(temp2);
}
int main()
{
    node* start = new(node);
    start =  NULL;
    int choice;
    while(1)
    {
        cout<<"press 1 for insert node"<<endl;
        cout<<"press 2 for display node"<<endl;
        cout<<"press 3 for insert after given node"<<endl;
        cout<<"press 4 for  delete given node"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            start = inserting(start);
            break;
        case 2:
            disp(start);
            break;
        case 3:
            start = inserting_pos(start);
            break;
        case 4:
            delet_e(start);
            break;
        }
    }
}
