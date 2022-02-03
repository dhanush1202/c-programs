#include<stdio.h>
#include<conio.h>
struct emp
{
    char name[10];
    char company[10];
    int id;
    int salary;
};

int main()
{

    struct emp *s;
    printf("enter the employee details(id,salary): ");
    scanf("%d",&s->id);
    scanf("%d",&s->salary);
    printf("id: %d\nsalary: %d",s->name,s->company,s->id,s->salary);
    return 0;

}