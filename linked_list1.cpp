#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<stdio.h>
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
   start ->next =NULL;
    return (start);
}

main()
{
    int value;
    struct node *s;
    struct node *head;
    struct node *temp;
    for (int i = 0;i < 5; i++)
    {
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
}
