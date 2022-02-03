#include<conio.h>
#include<stdio.h>
void main()
{
 int a,s=0,i,temp;
 clrscr();
 printf("enter any number: ");
 scanf("%d",&a);
 temp=a;
 while(a>0)
 {
  i=a%10;
  s=s+i;
  a=a/10;
  }
  printf("%d",s);
  getch();
  }
