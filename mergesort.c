#include<stdio.h>
void merge(int,int);
void combine(int,int,int);
int a[10],c[10];
int main()
{
    int i,n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge(0,n-1);
    printf("after sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void merge(int b, int e)
{
    int mid;
    if(b<e)
    {
        mid=(b+e)/2;
        merge(b,mid);
        merge(mid+1,e);
        combine(b,mid,e);
    }

    
}
void combine(int b,int mid,int e)
{
    int l=b,r=mid+1,i=b;
    while(l<=mid&&r<=e)
    {
        if(a[l]<=a[r])
        {
            c[i]=a[l];
            i++;
            l++;

        }
        else
        {
            c[i]=a[r];
            i++;
            r++;
        }

    }
    while(l<=mid)
    {
        c[i++]=a[l++];
    }
    while(r<=e)
    {
        c[i++]=a[r++];
    }
    for(i=b;i<=e;i++)
    {
        a[i]=c[i];
    }
}