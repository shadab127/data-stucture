#include<stdio.h>
#include<iostream>
using namespace std;
char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+'||x == '-')
        return 1;
    if(x == '*'||x == '/')
        return 2;
}
int main(void)
{
    char exp[20];
    char *e,x;
    cout<<"enter expresion ::"<<endl;
    cin>>exp;
    e = exp;
    while(*e != 0)
    {
        if(isdigit(*e))
        {
            cout<<*e;
        }
        else if(*e == '(')
        {
            push(*e);
        }
        else if(*e == ')')
        {
            while((x = pop()) != '(')
            {
                cout<<x<<endl;
            }
        }
        else{
            while(priority(stack[top]) >= priority(*e))
            {
                cout<<pop();

            }
            push(*e);
            e++;
        }
        while(top != -1)
        {
            cout<<pop();
        }
    }
    return 0;
}
