#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 int y,m,d,b,i,d1;
 int dm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 char a[7][20]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
 clrscr();
 printf("enter year,month,date: ");
 scanf("%d%d%d",&y,&m,&d);
 d1=d;
 if(y>=1900)
 {
 if(y%4==0)
  dm[1]= 29;
 for(i=1900;i<y;i++)
 {
 if(y%4==0)
 d+=366;

 else
 d+=365;
 }
 for(i=0;i<m-1;i++)
  d+=dm[i];

 b=d%7;
 }
 printf("the day on %d-%d-%d is %s",d1,m,y,a[b]);

 getch();
 }

