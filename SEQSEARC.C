#include<conio.h>
#include<stdio.h>
void main()
{
 int a[50],k,i,n;
 clrscr();
 printf("enter the size of the array: ");
 scanf("%d",&n);
 printf("enter the elements in the array: \n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("elements in array are: \n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 printf("\nenter the element to find: ");
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
 if(k==a[i])
 {
 printf("%d is at %d place in array",k,i+1);
 break;
 }
 }
 if(i==n)
 printf("element is not found");

  getch();
 }