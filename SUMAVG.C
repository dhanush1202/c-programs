//sum and avg of 3 numbers
#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b,c,d;
 float e;
 clrscr();
 printf("Enter any three numbers: ");
 scanf("%d%d%d",&a,&b,&c);
 d=a+b+c;
 e=(float)d/3;
 printf("sum and avaerage of the numbers %d,%d,%d is: %d,%.3f",a,b,c,d,e);
 getch();
 }