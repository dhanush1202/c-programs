#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char i,a,b;
 int sum=0;
 clrscr();
 printf("assign a word: ");
 gets(a);
 puts(a);
 while(i>0)
 {
  printf("enter the word: ");
  scanf("%c",b);
  if(a==b)
  sum += 1;
  else if(b==" ")
  break;
  else
  sum+=0;
  i++;
  }
 printf("the total count of the word %c is %d",a,sum);
 getch();
 }
  