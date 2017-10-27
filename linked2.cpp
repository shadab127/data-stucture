#include<iostream>
#include<stdlib.h>
#include<stdio.h>
int inserting();
using namespace std;
struct node
{
    int info;
    struct node *next;
};
node* create( int value)
{
   struct node *start = (struct node*) malloc(sizeof(struct node));
   if(start == NULL)
   {
       cout<<"fuck";
   }
   start -> info = value;
   start ->next = NULL;
    return (start);
}

main()
{

    for (int i = 0;i < 5; i++)
    {
        inserting();
    }
}
int inserting()
{
    int value,i;
        struct node *s;
    struct node *head;
    struct node *temp;
        cout<<"enter value"<<endl;
        scanf("%d",&value);
        temp = create(value);
        if (i == 0)
        {
            head = temp;
        }
        s = head;
        while( s-> next != NULL)
        {
            s = s->next;
        }
        s->next = temp;

}
