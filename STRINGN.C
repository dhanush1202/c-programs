
#include<stdio.h>
int main()
{
char s[50];
int i;

printf("enter a string: ");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
s[i]='\n';
}
printf("%s",s);
return 0;
}
