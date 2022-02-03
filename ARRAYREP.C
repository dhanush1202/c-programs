#include<conio.h>
#include<stdio.h>
void main()
{
 int a[20],i,j;
 clrscr();
 printf("Enter the length of array: ");
 scanf("%d",&j);
 printf("enter the elements in the array: ");
 for(i=0;i<j;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("elements in array are: \n");
 for(i=0;i<j;i++)
 {
 printf("%d\n",a[i]);
 }
 getch();
 }

