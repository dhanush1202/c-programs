
#include<conio.h>
#include<stdio.h>
struct student
{
char name[30],grade;
int id,m,p,c,total;
float avg;
}s[60];
void main()
{
int i,n;
clrscr();
printf("enter number of students");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter student %d details-name,id,m,p,c",i+1);
scanf("%s%d%d%d%d",s[i].name,&s[i].id,&s[i].m,&s[i].p,&s[i].c);
s[i].total=s[i].m+s[i].p+s[i].c;
s[i].avg=(float)s[i].total/3;
}
for(i=0;i<n;i++)
{
if(s[i].avg>=85)
s[i].grade='A';
else if(s[i].avg>=75)
s[i].grade='B';
else if(s[i].avg>=65)
s[i].grade='C';
else
s[i].grade='F';
}
printf("student name\tstudent id no.\tstudent grade\n");
for(i=0;i<n;i++)
{
printf("%s\t\t%d\t\t%c\n",s[i].name,s[i].id,s[i].grade);
}
getch();
}
