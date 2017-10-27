#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int enter(int,int*);
int enter_anywhere( int);
int deleting( int);
int searching( int);
int sorting( int);
int printing( int);
#define max_size 10000
int array[max_size];

main()
{
    int size,last=0;
    cout<<"\nEnter size of your array = ";
    cin>>size;
    cout<<"press 1 for enter new data at end \n";
    cout<<"press 2 for enter new data at any index \n";
    cout<<"press 3 for delete data form any index \n";
    cout<<"press 4 for search an element in your array \n";
    cout<<"press 5 for sorting your array \n";
    cout<<"press 6 for print your whole array \n";
    int choose;

        while(1)
    {
        cout<<"Enter your choice = ";
        cin>>choose;

        switch(choose)
        {
        case 1:
            enter(size,&last);
            break;
        case 2:
            enter_anywhere(size);
            break;
        case 3:
            deleting(size);
            break;
        case 4:
            searching(size);
            break;
        case 5:
            sorting(size);
            break;
        case 6:
            printing(size);
            break;
        default:
            cout<<"Invalid Entry!, Please try again";

        }
    }
}

int enter( int size,int *last)
{
    int temp = *last;
  if (temp < size)
  {

  cin>> array[temp];
  last++;
  }
  else{
    cout<<"your array limit reached";
  }
}
int enter_anywhere(int size,int *last)
{
    cout<<"enter which place you want to enter new no.";
    int index;
    cin>>index;
    temp = *last;
    if(temp < size)
    {
        for(int i = last;i > index;i--)
        {
            array[i] = array[i + 1];
        }
        cout<<"enter your new entry";
        cin>> array[index];
    }
    else{
        cout<<"your array is full";
    }
}
int deleting(int size,int *last)
{

}
