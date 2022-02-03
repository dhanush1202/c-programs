#include<conio.h>
#include<stdio.h>
void main()
{
 int n,i,rem,sum=0,temp,f;

 printf("enter n value: ");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
 rem = n%10;
 f=1;
 for(i=rem;i>0;i--)

  f= f * i;

 sum = sum + f;
 n=n/10;
 }
if(temp==sum)
printf("%d is strong",temp);
else
printf("%d is not strong",temp);
getch();
}