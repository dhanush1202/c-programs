#include<conio.h>
#include<stdio.h>
void main()
{
int a[50],i,n;
int *p;
clrscr();
p=a;
printf("size: ");
scanf("%d",&n);
printf("arr elemnts: ");
for(i=0;i<n;i++)
scanf("%d",(p+i));
for(i=0;i<n;i++)
printf("%d\n",*(p+i));
getch();
}