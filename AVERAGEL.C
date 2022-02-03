#include<conio.h>
#include<stdio.h>
void main()
{
int a,i=1,sum=0,j;
clrscr();
while(i<=3)
{
 printf("enter the value: ");
 scanf("%d",&a);
 sum+=a;
 i++;
 }
 j=sum/3;
 printf("average of the numbers: %d",j);
 getch();
 }