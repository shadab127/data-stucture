#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>

class index
{
    public :
      int power(int m,int n);
      int power(int m);
};
int main()
{

    int m,n;
    cout<<"Enter value of m and n:  ";
    cin>>m>>n;
    int ans;
    index power1;
    if( n == NULL)
    {
        ans = power1.power(m);
    }
    else
        ans = power1.power(m,n);
    cout<<ans;
    cout<<endl<<"press enter for continue"<<endl;

        char str[10];
        sprintf(str,"THE ANSWEr %d",ans);
    MessageBox(NULL,str,TEXT("answer"),MB_OK);
     getch();
    system("cls");
    main();
}
int index::power(int m,int n)
{
    int temp = m;
    for(int i = 1; i < n;i++)
    {
        m = m * temp;
    }
    return (m);
}
int index::power(int m)
{
    int ans = m * m;
    return ans;
}
