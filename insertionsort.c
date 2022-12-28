#include<stdio.h>

void Insertionsort(int a[] , int n)
{
    int i  , j;
    int x;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}

int main()
{
    int a[]={3,2,6,4,8,7,9,1,10,11};
    int n=10;
    Insertionsort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}