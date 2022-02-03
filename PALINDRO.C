#include<conio.h>
#include<stdio.h>
int palind(int);
int main()
{
 int a,n,c;
 printf("enter the number: ");
 scanf("%d",&n);
 c=n;
 a= palind(n);
 printf("reverse: %d",a);
 if(c==a)
 printf("\npalindrome");
 else
 printf("\nnot a palindrome");
 
 return 0;
 
 }
 int palind(int n)
 {
 int x,y=0;
 while(n>0)
 {
 x=n%10;
 y=y*10+x;
 n=n/10;
 }
 return y;
 }