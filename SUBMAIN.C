#include<conio.h>
#include<stdio.h>
void main()
{
char a[50],b[50],c[50];
int i=0,n,o,p,j=0;
clrscr();
printf("enter the main string: ");
gets(a);
printf("enter the sub string: ");
gets(b);
while(a[i]!='\0')
{
n++;
i++;
}
while(b[j]!='\0')
{
o++;
j++;
}
printf("enter position: ");
scanf("%d",&p);
for(i=0,j=0;i<p;i++,j++)
c[i]=a[j];
for(i=p,j=0;b[j]!='\0';i++,j++)
c[i]=b[j];
for(i=p+o,j=p;a[j]!='\0';i++,j++)
c[i]=a[j];
c[i]='\0';
puts(c);
getch();
}
