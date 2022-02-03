#include<conio.h>
#include<stdio.h>
void arr();
void main()
{
arr();
getch();
}
void arr()
{
int a[50],i,n;
clrscr();
printf("size: ");
scanf("%d",&n);
printf("arr elemnts: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}