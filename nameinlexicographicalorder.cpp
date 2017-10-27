#include <stdio.h>
#include<conio.h>
#include <string.h>
class names
{
    public:
    char name[100000];
};
int main()
{
        printf("how many names you want to enter\n");
        int n;
        scanf("%d",&n);
        names invite[n];
        int p = 0;
        while(p < n)
        {
            scanf("%s",invite[p].name);
            p++;
        }
        int k = p;
        char cmp[100000];
        while(p--)
        {

        for(int i = 0;i < k; i++)
        {
         for(int j = i + 1 ; j < k ; j++)
         {
            if(strcmp(invite[i].name,invite[j].name) > 0)
            {
                strcpy(cmp,invite[i].name);
                strcpy(invite[i].name,invite[j].name);
                strcpy(invite[j].name,cmp);
            }

         }
        }
}
for(int g = 0;g < k;g++)
{
    printf("%s\n",invite[g].name);
}
}

