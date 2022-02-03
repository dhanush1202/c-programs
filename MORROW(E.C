#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
int date,month,year;
int next_date,next_month,next_year;
int month1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char day[7][20] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
int d,m,y,i,b;
clrscr();
 printf("year,month,date: ");
 scanf("%d%d%d",&year,&month,&date);
 if((year>1900)
 {

if (year % 4 == 0)
{
	if ((month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12) && date <= 30)
	{
	next_date = date + 1;
	next_month = month;
       next_year = year;
		}


    else if ((month == 1||month == 3||month == 5||month == 7||month == 8||month == 10)&&date == 31)
	{
	next_date = 1;
	next_month = month + 1;
	next_year = year;
		}

    else if ((month == 4||month == 6||month == 9||month == 11)&&date <= 29)
	{
	next_date = date + 1;
	next_month= month;
	next_year= year;
		}
   else if  ((month == 4||month == 6||month == 9||month == 11)&&date == 30)
      {
	next_date = 1;
	next_month= month + 1;
	next_year = year;
		}

   else if  ((month == 2)&&date <= 28)
	{
	next_date = date + 1;
	next_month = month;
	next_year = year;
		}
    else if ((month == 2)&&date == 29)
      {
       next_date = 1;
       next_month = month + 1;
       next_year = year;
		}

    else if  ((month == 12)&&date == 31)
	{
       next_date = 1;
       next_month = 1;
       next_year = year + 1;

		}
	else
	{
	next_date = 0;
	next_month = 0;
	next_year = 0;
		}
	printf("next date of the date %d-%d-%d is %d-%d-%d",date,month,year, next_date,next_month,next_year);
}

else
{
    if ((month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12) && date <= 30)
	{
	next_date = date + 1;
	next_month  = month;
	next_year = year;
		}


    else if ((month == 1||month == 3||month == 5||month == 7||month == 8||month == 10)&&date == 31)
	{
	next_date = 1;
	next_month  = month + 1;
	next_year = year;
		}

    else if ((month == 4||month == 6||month == 9||month == 11)&&date <= 29)
	{
	next_date = date + 1;
	next_month  = month;
	next_year = year;
		}
    else if ((month == 4||month == 6||month == 9||month == 11)&&date == 30)
      {
	next_date = 1;
	next_month  = month + 1;
	next_year = year;
		}

    else if  ((month == 2)&&date <= 27)
	{
	next_date = date + 1;
	next_month  = month;
	next_year = year;
		}
    else if ((month == 2)&&date == 28)
      {
	next_date = 1;
	next_month  = month + 1;
	next_year = year;
		}

    else if  ((month == 12)&&date == 31)
	{
	next_date = 1;
	next_month  = 1;
	next_year = year + 1;

		}
	else
	{
	next_date = 0;
	next_month  = 0;
	next_year = 0;
	}

printf("next date of the date %d-%d-%d is %d-%d-%d",date,month,year, next_date,next_month,next_year);
}
}

else
{
printf("0-0-0");
}
 if (y % 4 == 0)
  month1[1] = 29;
 for (i = 1900; i < y; i++)
  if (i % 4 == 0)
   d += 366;
  else
   d += 365;
 for (i = 0; i < m - 1; i++)
  d += month1[i];

  b=d%7;

  if (b<0)
  b=7+b;
  else
  b=b;

 printf("The day on %d-%d-%d is %s.\n",date,month,year,day[b]);
 printf("The next day is %s.\n",day[b+1]);

printf("\n\n NOTE: IF THE GIVEN INPUT IS WRONG IT DISPLAYS DATE AS 0-0-0");
getch();
}
