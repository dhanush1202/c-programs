#include<conio.h>
#include<stdio.h>
void main()
{
 int n,s=0,i,rem,temp;
 clrscr();
 printf("enter n value: ");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
 rem = n%10;
 s = s + rem*rem*rem;
 n=n/10;
 }
 if(s==temp)
 printf("%d is amstrong number",temp);
 else
 printf("not amstrong");
 getch();
 }