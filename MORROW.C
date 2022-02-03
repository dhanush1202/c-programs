
#include<stdio.h>
int main()
{
int date,month,year;
int next_date,next_month,next_year;
int month1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char day[7][20] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
int i,b,c,z,d=1;

 printf("date,month,year after 1/1/1990: ");
 scanf("%d%d%d",&c,&month,&year);

 if(year>=1990&&(month>=1&&month<=12)&&(c>=1&&c<=31))

 {
 date=c;
 if (year % 4 == 0 &&(year%100 !=0 || year%400==0))
	month1[1] = 29;
 for (i = 1990; i < year; i++)
  if (i % 4 == 0 &&(year%100 !=0 || year%400==0))
   c += 366;
  else
   c += 365;
 for (i = 0; i < month - 1; i++)
  c += month1[i];

  b=c%7;

  if (b<0)
  b=7+b;

  z=b+1;
  if(z==7)
 z=0;
if ((month==2)&&(date<=28))

{
	if (year%4==0&&(year%100==0|| year%4==0))
	{
	next_date = date + 1;
	next_month = month;
    next_year = year;

		}

 else
      {
	 next_date = 1;
     next_month = month + 1;
	next_year = year;

		}
}
    else if ((month==2)&&(date==29)&&(year%4==0&&(year%100==0|| year%4==0)))
 {
    next_date = 1;
      next_month = month + 1;
	next_year = year;

	}


	else if ((month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12) && date <= 30)
	{
		next_date = date + 1;
	next_month = month;
       next_year = year;

		}


    else if ((month == 1||month == 3||month == 5||month == 7||month == 8||month == 10)&&date == 31)
	{next_date = 1;
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
	d=0;
	}

printf("\nThe next date of date %d-%d-%d is %d-%d-%d\n",date,month,year, next_date,next_month,next_year);
}

else
{
printf("0-0-0");
d=0;
}
if(d==1)
{

 printf("\nThe day on %d-%d-%d is %s.\n",date,month,year,day[b]);

 printf("\nNext day is %s\n\n",day[z]);
}
else
printf(".\n");

printf("\n\n NOTE: IF THE GIVEN INPUT IS WRONG IT DISPLAYS DATE AS 0-0-0");
return 0;
}
