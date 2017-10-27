#include <stdio.h>
int prime(int check)
{
    int n, i, flag = 0;
    n = check;

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
        return 1;
    else
        return 0;
}
int main()
{
    int flag = 0;
    int check,temp;
    int sizeofgrid = 100;
    scanf("%d",&sizeofgrid);
    int grid[sizeofgrid][sizeofgrid];
    //initialize grid
    for(int i  = 0;i < sizeofgrid; i++)
    {
        for(int j = 0;j < sizeofgrid;j++)
        {
            scanf("%d",&grid[i][j]);
        }
    }


    for(int i  = 0;i < sizeofgrid;i++)
    {
        for(int j = 0;j < sizeofgrid;j++)
        {
            //check upper
            if(i > 0 ){
                temp = grid[i - 1][j];
            }
            //check lower
            if(i < (sizeofgrid - 1) ){
               temp = temp + grid[i + 1][j];
            }
            //check right
            if(j < (sizeofgrid - 1)){
                temp = temp + grid[i][j + 1];
            }
            //check left
            if(j > 0){
                temp = temp + grid[i][j - 1];
            }
            check = prime(temp);
            if (check){
                flag++;
            }
            temp = 0;
        }
    }
    printf("%d",flag);
}
