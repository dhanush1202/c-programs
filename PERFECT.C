#include<conio.h>
#include<stdio.h>
int main()
{
 int i,s=0,n;
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
 if(n%i==0)
 s+=i;
 }
 if(n==s)
 printf("%d is perfect number",n);
 else
 printf("%d is not a perfect number",n);
 return 0;
 }