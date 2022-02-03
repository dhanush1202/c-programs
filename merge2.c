#include<stdio.h>
#include<stdlib.h>
void mergesort(int,int);
void combine(int,int,int);
int a[100],c[100];
int n;
int main()
{
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    mergesort(0,n-1);
    printf("sorted array: ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
void mergesort(int b,int e)
{
    if(b<e)
    {
    int mid=(b+e)/2;
    
    mergesort(b,mid);
    mergesort(mid+1,e);
    combine(b,mid,e);
    }
}
void combine(int b,int mid,int e)
{
   int l=b,r=mid+1,i=b;
   while(l<=mid&&r<=e)
   {
       if(a[l]<a[r])     
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
       c[i]=a[l];
       i++;
       l++;
   }
   while(r<=e)
   { 
       c[i]=a[r];
       i++;
       r++;
   }
   for(int j=b;j<=e;j++)
   {
       a[j]=c[j];
   }
}
