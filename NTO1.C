#include<conio.h>
#include<stdio.h>
void main()

{
 int i,n;
 clrscr();
 printf("enter the value of n: ");
 scanf("%d",&n);
 for(i=n;i>=1;i-=1)
   printf("\n%d",i);
getch();
}