#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[20]={'0','1','2','3','4','5','6','7','8','9','u'},t;
int i,j,n=0,c;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
n++;
for(i=0;i<n-2;i++)
{
for(j=i+1;j<n-1;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;b[i]!='u';i++)
{
c=0;
for(j=0;j<n;j++)
{
if(a[j]==b[i])
c+=1;
}
printf("\nnumber of %d digits are---%d\n",i,c);
}
getch();
}