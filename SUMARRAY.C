#include<conio.h>
#include<stdio.h>
void main()
{
 int a[20],i,j,s=0;
 clrscr();
 printf("Enter the length of array: ");
 scanf("%d",&j);
 printf("enter the elements in the array: ");
 for(i=0;i<j;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("sum of elements in array is: \n");
 for(i=0;i<j;i++)
 {
 s+= a[i];
 }
 printf("%d\n",s);

 getch();
 }

