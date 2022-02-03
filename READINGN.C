
#include<conio.h>
#include<stdio.h>

void main()
{
 int a,i;
 clrscr();
 printf("enter a number: ");
 scanf("%d",&a);

 if(a%2==1)
 {
 while(a>=0)
 {
 printf("\n%d",a);
 a-=2;
 }
 }
 else
 printf("%d is not odd",a);
 getch();
}