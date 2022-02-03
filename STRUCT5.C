#include<conio.h>
#include<stdio.h>
struct std
{
char name[5][20];
int marks[5][5];
}s;
void main()
{
int i,j,a[5],min;
clrscr();

for(i=0;i<5;i++)
{
printf("enter name: ");
fflush(stdin);
scanf("%s",s.name[i]);
for(j=0;j<5;j++)
{
printf("enter marks of sub%d: ",j+1);

scanf("%d",&s.marks[i][j]);
}}
for(i=0;i<5;i++)
{

for(j=0;j<5;j++)
{
min=s.marks[i][0];
if(s.marks[i][j]<min)
min=s.marks[i][j];
a[i]=min;
}}
for(i=0;i<5;i++)
{
printf("%s : %d\n",(s.name[i]),a[i]);
}
getch();
}
