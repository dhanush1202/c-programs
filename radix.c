#include<stdio.h>
void radix(int a[],int n);

int main()
{
    int i,n;
    int a[10];
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("\nenter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    radix(a,n);
    printf("after sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void radix(int a[],int n)
{
    int i,b[10],m=0,p=1;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        m=a[i];
    }
    for(p=1;m/p>0;p=p*10)
    {
        int c[10]={0};
        for(i=0;i<n;i++)
        {
            c[a[i]/p%10]++;
        }
        for(i=1;i<10;i++)
        {
            c[i]+=c[i-1];
        }
        for(i=n-1;i>=0;i--)
        {
            b[--c[a[i]/p%10]]=a[i];
        }
        for(i=0;i<n;i++)
        {
            a[i]=b[i];
        }
    }
}