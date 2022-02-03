
#include<stdio.h>
int main()
{
 int i,a[50],sum=0,n;

 printf("enter the total no of elements: ");
 scanf("%d",&n);
 i=0;
 while(i<n)
 {
 printf("enther the elements: ");
 scanf("%d",&a[i]);
 if(a[i]%2==1)
 sum+=a[i];
 i++;
 }
 printf("%d is the sum of odd number",sum);

 }