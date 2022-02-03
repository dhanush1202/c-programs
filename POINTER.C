#include<conio.h>
#include<stdio.h>
struct student
{
char name[20],clg[20];
int id;
char mobno[10];
};
void main()
{

struct student *s;
clrscr();
printf("enter student name,college name,id,mobile number");
scanf("%s%s%d%s",s->name,s->clg,&s->id,s->mobno);
printf("student:%s\ncollege:%s\nid:%d\nmobile:%s",s->name,s->clg,s->id,s->mobno);
getch();
}