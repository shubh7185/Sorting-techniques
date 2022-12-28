
#include<stdio.h>
#include<stdlib.h>

void swap(int *x , int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int findmax(int a[] , int n)
{
    int max = -32768;
    int i ;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}


void countsort(int a[] , int n)
{
    int i , j,max , *c;
    max=findmax(a,n);
    c=(int *)malloc(sizeof(int)*(max+1));
    for(i=0;i<max+1;i++)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        c[a[i]]++;

    }

    i=0;j=0;
    while(j<max+1)
    {
        if(c[j]>0)
        {
            a[i++]=j;
            c[j]--;
        }
        else
        {
            j++;
        }
    }
}


int main()
{
    int a[]={3,7,9,10,6,5,12,4,11,2};
    int n=10;
        // imergesort(a,n);
        // recumidsort(a,0,9);
        countsort(a,n);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
        printf("\n");
    return 0;

}