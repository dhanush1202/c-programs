#include<conio.h>
#include<stdio.h>
int main()
{
    char a[500];
    int s=0,i;
    printf("enter the string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        s+=1;
    printf("total no of char's: %d",s);
    return 0;
}