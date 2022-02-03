#include<conio.h>
#include<stdio.h>
int main()
{
    int i,a[5],*p,s=0;
    p=a;
    printf("enter the array elements: ");
    for(i=0;i<5;i++)
    scanf("%d",(p+i));
    for(i=0;i<5;i++)
    printf("%d is at %u\n",*(p+i),(p+i));
    return 0;
}