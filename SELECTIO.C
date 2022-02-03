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
printf("%d",a[i]);
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
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