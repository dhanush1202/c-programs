#include<conio.h>
#include<stdio.h>
void main()
{
 int a[50],t,i,n,j;
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
 for(i=0;i<n;i++)
 {
 for(j=0;j<n-i-1;j++);
 {
 if(a[j]>a[j+1])
 {
 t=a[j];
 a[j]=a[j+1];
 a[j+1]=t;
 }
 }
 }
 printf("\nsorted array: \n");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
 getch();
 }