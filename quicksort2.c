#include<stdio.h>
#include<stdlib.h>
int partition(int[],int,int);
void quicksort(int[],int,int);

int main()
{
    int n;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("the sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void quicksort(int a[],int b,int e)
{
    int p;
    if(b<e)
    {
        p=partition(a,b,e);
        quicksort(a,b,p-1);
        quicksort(a,p+1,e);
    }
}

int partition(int a[],int b,int e)
{
    int pt,p,i,t;
    pt=a[e];
   p=b; 
    for(i=b;i<e;i++)
    {
        if(a[i]<=pt)
        {
            
           t=a[i];
           a[i]=a[p];
           a[p]=t;
            p++;
        }

    }
    
    {
    
    t=a[e];
    a[e]=a[p];
    a[p]=t;
    }
    
    
    return p;
}
