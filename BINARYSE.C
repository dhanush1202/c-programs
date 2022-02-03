#include<conio.h>
#include<stdio.h>
void main()
{
 int a[50],k,i,n,mid,b,e;
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
 b=0;
 e=n-1;
 printf("\nenter the element to find: ");
 scanf("%d",&k);
 while(b<e)
 {
 mid= (b+e)/2;
 if(a[mid]<k)
 b = mid+1;
 else if (a[mid]==k)
 {
 printf("%d is found at %d position",k,mid+1);
 break;
 }
 else
 e=mid+1;
 }
 if(b>=e)
 printf("%d is not found",k);
 getch();
 }
