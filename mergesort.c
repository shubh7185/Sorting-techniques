#include<stdio.h>

void swap(int *x , int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void merge(int a[],int l , int mid , int h)
{
    int i=l , j=mid+1 , k=l;
    int b[100];

    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        {
            b[k++]=a[i++];
        }
        else
        {
            b[k++]=a[j++];
        }
    }
    for( ; i<=mid;i++)
    {
        b[k++]=a[i];
    }
    for( ; j<=h;j++)
    {
        b[k++]=a[j];
    }

    for(int i=l ; i<=h;i++)
    {
        a[i]=b[i];
    }
}

void imergesort(int a[] , int n)
{
    int p , l , h , mid , i;

    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(a,l,mid,h);
        }
    }
    if((p/2)<n)
    merge(a,0,p/2-1,n-1);
}

void recumidsort(int a[] , int l , int h )
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        recumidsort(a,l,mid);
        recumidsort(a,mid+1,h);
        merge(a,l,mid,h);
    }

}

int main()
{
    int a[]={3,7,9,10,6,5,12,4,11,2};
    int n=10;
        // imergesort(a,n);
        recumidsort(a,0,9);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
        printf("\n");
    return 0;

}