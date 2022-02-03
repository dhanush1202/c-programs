#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 char day[7][20] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
 int d,m,y,i,b;
 clrscr();
 printf("Fill in a date after 01-01-1900 as dd-mm-yyyy: ");
 scanf("%d%d%d",&d,&m,&y);
 if (y % 4 == 0)
	month[1] = 29;
 for (i = 1900; i < y; i++)
  if (i % 4 == 0)
   d += 366;
  else
   d += 365;
 for (i = 0; i < m - 1; i++)
  d += month[i];

  b=d%7;

  if (b<0)
  b=7+b;
  else
  b=b;

 printf("This is a %s.\n", day[b]);
 getch();
}
