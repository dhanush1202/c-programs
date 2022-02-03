#include<conio.h>
#include<stdio.h>
int main()
{
    int a[100],*p,i,n;
    p=a;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    printf("array elements are: \n");
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));
    return 0;
}