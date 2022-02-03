#include<conio.h>
#include<stdio.h>
struct student
{
char name[10];
char section[10];
struct details
{
int age;
char surname[15];
}b;
}s;
void main()
{
clrscr();
printf("enter student name,section,age,surname: ");
scanf("%s%s%d%s",s.name,s.section,&s.b.age,s.b.surname);
printf("%s\n%s\n%d\n%s",s.name,s.section,s.b.age,s.b.surname);
getch();
}