#include<stdio.h>
#include<stdlib.h>
void radix();
void count(int);
int a[100],n;
int main()
{
    int i;
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }


    radix();
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i] );
    }
    return 0;
}
void radix()
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(int i=1;max/i>0;i=i*10)
    {
        count(i);
    }
}
void count(int p)
{
    int o[10],output[n],i;
    for(i=0;i<10;i++)
    {
        o[i]=0;
    }
    for(i=0;i<n;i++)
    {
        o[(a[i]/p)%10]++;
    }
    for(i=1;i<10;i++)
    {                                 
        o[i]=o[i]+o[i-1];
    }
    for(i=0;i<n;i++)
    {
        output[--o[(a[i]/p)%10]]=a[i];

    }
    for(i=0;i<n;i++)
    {
        a[i]=output[i];
    }
}