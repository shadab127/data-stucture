//Merge sort
#include <stdio.h>
#include <string.h>
int len;
//Sorting in non decreasing order

void merge(int arr[], int i, int mid, int j) {
    int temp[len];
    int l = i;
    int r = j;
    int m = mid + 1;
    int k = l;

    while(l <= mid && m <= r) {
        if(arr[l] <= arr[m]) {
            temp[k++] = arr[l++];
        }
        else {
            temp[k++] = arr[m++];
        }
    }

    while(l <= mid)
        temp[k++] = arr[l++];

    while(m <= r) {
        temp[k++] = arr[m++];
    }

    for(int i1 = i; i1 <= j; i1++) {
        arr[i1] = temp[i1];
    }
}
void mergesort(int arr[], int i, int j) {
    int mid = 0;

    if(i < j) {
        mid = (i + j) / 2;
        mergesort(arr, i, mid);
        mergesort(arr, mid + 1, j);
        merge(arr, i, mid, j);
    }
}
int main()
{int T,siz,S = 0,temp;
scanf("%d",&T);
while(T--)
{
    scanf("%d",&siz);
    int arr[siz];
    for(int i = 0;i < siz;i++)
    {
        scanf("%d",&arr[i]);
    }
    len = sizeof(arr) / sizeof(int);
    printf("\n");
    mergesort(arr, 0, len - 1);
    //minimum of S
    for(int i = 0; i < siz ; i = i + 2)
    {
     if( arr[i] < 0)
     {
         temp = -1 * arr[i];
         S = S + ( arr[i + 1] + temp);
     }
     else{
        S = S + ( arr[i + 1] - arr[i]);
     }
    }
    printf("%d",S);
    S = 0;
    int mid = siz / 2;
    for(int i = 0; i < mid ; i++)
    {
     if( arr[i] < 0)
     {
         temp = -1 * arr[i];
         S = S + ( arr[siz - ( i + 1 ) ] + temp);
     }
     else{
        S = S + ( arr[siz - ( i + 1 )] - arr[i]);
     }
    }

     printf(" %d\n",S);
     S = 0;
}
}
