#include<conio.h>
#include<stdio.h>
void main()
{
 int a[20],i,j,max=0;
 clrscr();
 printf("Enter the length of array: ");
 scanf("%d",&j);
 printf("enter the elements in the array: ");
 for(i=0;i<j;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("maximum value in array is: \n");
 for(i=0;i<j;i++)
 {
 if(a[i]>max)
 max=a[i];
 }
 printf("%d",max);
 getch();
 }

