#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[20];
int i=0,j,n=0,f=0;
printf("enter the string: ");
gets(a);
while(a[i]!='\0')
{
 n++;
 i++;
 }
for(i=n-1,j=0;i>=0,j<n;i--,j++)
 b[j]=a[i];
 b[j]='\0';

 puts(b);


return 0;
 }