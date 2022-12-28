#include<stdio.h>

void swap(int *x , int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Bubblesort(int a[] , int n)
{
    int i , j ;
    int flag;
    for(i=0;i<n-1;i++) // loop for no of passes
    {
        flag=0;
        for(j=0;j<n-1-i;j++) // loop for no of compraision
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    int a[]={3,2,6,4,8,7,9,1,10,11};
    int n=10;
    Bubblesort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}