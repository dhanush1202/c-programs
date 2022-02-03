#include<conio.h>
#include<stdio.h>
void swap(int,int);
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
swap(a,b);
getch();
}
void swap(int a, int b)
{
int t;
t=a;
a=b;
b=t;
printf("%d %d",a,b);
}
