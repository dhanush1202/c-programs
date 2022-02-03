#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char s1[20],s2[20],x;
 clrscr();
 printf("enter any string; ");
 gets(s1);
 strcpy(s2,s1);
 strrev(s2);
 x = strcmp(s1,s2);
 if(x==0)
 {
 printf("palindrome");
 }
 else
 {
 printf("not a palindrome");
 }
 getch();
 }