#include<stdio.h>

void swap(int *x , int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int a[] , int l , int h)
{
    int pivot=a[l];
    int i=l;
    int j=h;
    do 
    {
        do 
        {
            i++;
        }while(a[i]<=pivot);
        do 
        {
            j--;
        }while(a[j]>pivot);
        if(i<j)
        swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[l] , &a[j] );
    return j;
}

void Quicksort(int a[] , int l , int h)
{
    int j;
    if(l<h)
    {
        j=partition(a,l,h);
        Quicksort(a,l,j);
        Quicksort(a,j+1,h);
    }
}

int main()
{
    int a[]={3,7,9,10,6,5,12,4,11,2 , 65535};
    Quicksort(a,0,10);
    int n=11;
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
        printf("\n");
    return 0;

}