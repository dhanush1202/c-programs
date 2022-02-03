#include<stdio.h>
#include<stdlib.h>
int partition(int ,int);
int a[10];
void quicksort(int,int);
int main()
{
    int i,n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(0,n-1);
    printf("after sorting:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int partition(int b,int e)
{
    int i,j,pt,t;
    pt=a[b];
    i=b;
    j=e;
    while(i<=j)
    {
        i++;
    }
    while(a[j]>pt)
    {
        j--;
    
    if(i<j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }}

    t=a[j];
    a[j]=a[b];
    a[b]=t;
    return j;
}
void quicksort(int b,int e)
{
    int p;
    if(b<e)
    {

    p=partition(b,e);
    quicksort(b,p-1);
    quicksort(p+1,e);
    }

}