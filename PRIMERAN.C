#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,a,b,f,c=0;
clrscr();
printf("enter the range: ");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
f=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
{
 c++;
 printf("%d is a prime number\n",i);
 }
 }
 printf("no of prime numbers in given range: %d",c);
 getch();
 }