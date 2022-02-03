#include<conio.h>
#include<stdio.h>
void main()
{
 int y,x,n;
 clrscr();
 printf("give the vaues of x,n: ");
 scanf("%d%d",&x,&n);
 y=1;
 while(n>0)
 {
 y*=x;
 n--;
 }
 printf("value of y: %d",y);
 getch();
 }