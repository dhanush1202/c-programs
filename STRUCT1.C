#include<conio.h>
#include<stdio.h>
struct student
{
char name[10];
char section[10];
int age;
char surname[15];
}*s;
int main()
{
printf("enter student name,section,age,surname: ");
scanf("%s%s%d%s",s->name,s->section,&s->age,s->surname);
printf("%s\n%s\n%d\n%s",s->name,s->section,s->age,s->surname);
return 0;
}