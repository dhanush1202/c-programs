#include<conio.h>
#include<stdio.h>
void main()
{
int a[50],i,n,max=0,min=0;
 clrscr();
 printf("enter the range of array: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
  for(i=0;i<n;i++)
 {
  if(a[i]>max)
  max=a[i];
 }
 printf("max: %d",max);
  min=a[0];
  for(i=0;i<n;i++)
 {
  if(a[i]<min)
  min=a[i];
 }
 printf("\nmin: %d",min);
 getch();
 }