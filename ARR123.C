#include<conio.h>
#include<stdio.h>
void main()
{
int a[50],b[50],c[50];
int n,i,rem,sum,sum1=0,sum2=0;
clrscr();
printf("enter the size of array: ");
scanf("%d",&n);
printf("enter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
for(i=0;i<n;i++)
{
sum=0;
printf("%d ",a[i]);
while(a[i]>0)
{
rem=a[i]%10;
sum=sum*10+rem;

a[i]=a[i]/10;
}
b[i]=sum;
}
printf("\n");

for(i=0;i<n;i++)
{
printf("%d ",b[i]);
sum1+=b[i];
}
printf("\n%d",sum1);
for(i=1;i<n;i+=2)
{
sum2+=c[i];
}
printf("\n%d",sum2);

getch();
}