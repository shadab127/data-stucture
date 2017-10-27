#include <stdio.h>
int main()
{
    int n,m, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&m);
    while(m--)
    {
     n = m;
    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }


    if (flag==0)
        printf("\n%d",n);
        flag = 0;
    }
    return 0;
}
