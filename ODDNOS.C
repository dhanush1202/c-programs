#include<conio.h>
#include<stdio.h>
void main()
{
 int i,n;
 clrscr();
 printf("enter the value of n: ");
 scanf("%d",&n);
 for(i=1;i<=n;i+=2)
   printf("\n%d",i);
getch();
}