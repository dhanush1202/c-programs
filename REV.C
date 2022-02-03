#include<conio.h>
#include<stdio.h>
void main()
{
 int x,y,n;
 clrscr();
 printf("enter the number: ");
 scanf("%d",&n);
 y=0;
 while(n>0)
 {
 x=n%10;
 y=y*10+x;
 n=n/10;
 }
 printf("reverse: %d",y);
 getch();
 }