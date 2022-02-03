#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b=1,c;
 clrscr();
 printf("enter the value of a: ");
 scanf("%d",&a);
 while(b<=10)
 {
 c=a*b;
 printf("\n%d * %d = %d",a,b,c);
 b+=1;
 }
getch();
}