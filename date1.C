#include<conio.h>
#include<stdio.h>
int main()
{
int date,month,year;
int next_date,next_month,next_year;
 printf("year,month,date: ");
 scanf("%d%d%d",&year,&month,&date);
 printf("next date of %d/%d/%d is \n",year,month,date);
if (year % 4 == 0)
{
	if ((month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12) && date <= 30)
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
        {next_date = 1;
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
getch();
}
