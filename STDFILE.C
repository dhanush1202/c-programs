#include<conio.h>
#include<stdio.h>
void main()
{
char s[50];
int a;
float b;
FILE *fp;

clrscr();
fp=fopen("a.txt","w");
printf("enter student name,rollno,marks: ");
scanf("%s%d%f",s,&a,&b);
fprintf(fp,"%s\n%d\n%f",s,a,b);
fclose(fp);
fp=fopen("a.txt","r");
fscanf(fp,"%s%d%f",s,&a,&b);
printf("name= %s\nrollno= %d\nmarks= %.2f",s,a,b);

fclose(fp);
getch();
}
