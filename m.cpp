#include<iostream>
using namespace std;
int maxe(int &x,int &y)
{
    cout<<"***"<<endl<<x<<endl<<&y<<"****";
    if(x > y)
        return x;
    else
        return y;
}
enum colour {red,blue,green,yellow};
main()
{
    colour backer=(colour)7;
    cout<<backer;
    colour red=(colour)5;
    cout<<red;
    cout<<"\n"<<5<<endl;
    char xx[4] = "xyz";
    cout<<xx;
    void *pr;
    pr = 0;
    cout<<endl<<pr;
    int a = 10,b = 20;
   int p = maxe(a,b);
   cout<<endl<<p;
}
