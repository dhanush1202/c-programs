#include<conio.h>
#include<stdio.h>
void main()
{
 int n,i,c010=0,c1120=0,c2130=0,c3140=0,c4150=0;
 clrscr();
 printf("enter any number between 0 to 50: ");
 for(i=0;i<10;i++)
 {
 scanf("%d",&n);
 if(n>0 &&n<=10)
 c010+=1;
 else if(n>10 &&n<=20)
 c1120+=1;
 else if(n>20 &&n<=30)
 c2130+=1;
 else if(n>30 &&n<=40)
 c3140+=1;
 else if(n>40 &&n<=50)
 c4150+=1;
 }
 printf("Number of integers in the range 0 to 10 is %d\n",c010);
 printf("Number of integers in the range 0 to 10 is %d\n",c1120);
 printf("Number of integers in the range 0 to 10 is %d\n",c2130);
 printf("Number of integers in the range 0 to 10 is %d\n",c3140);
 printf("Number of integers in the range 0 to 10 is %d\n",c4150);
 getch();
 }

