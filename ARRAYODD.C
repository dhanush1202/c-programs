#include<conio.h>
#include<stdio.h>
void main()
{
int a[10],i,n;
 clrscr();
 printf("enter the range of array: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("odd elements in array are: \n");
 for(i=0;i<n;i++)
 {
 if(a[i]%2==1)
 printf("%d\n",a[i]);
 }
 getch();
 }