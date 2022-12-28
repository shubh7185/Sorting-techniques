#include<stdio.h>

void swap(int *x , int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void selectionsort(int a[] , int n)
{
    int i , j , k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        swap(&a[i], &a[k]);
    }
}



int main()
{
    int a[]={3,2,6,4,8,7,9,1,10,11};
    int n=10;
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}