#include<conio.h>
#include<stdio.h>
void main()
{
    char a[200];
    char b;
    char *p;
    int i,sum,j;
    p=a;
    clrscr();
    printf("enter the string: ");
    scanf("%s",p);
   // fflush(stdin);
   // printf("enter the alphabet: ");
   // scanf("%c",&b);
    for(i=0;*(p+i)!='\0';i++)
    {
      sum=0;
      for(j=0;*(p+j)!='\0';j++)
    {
	if(*(p+i)==*(p+j))
	{
	sum+=1;
	}
	}
	printf("%c is repeated %d times\n",*(p+i),sum);


    }
    getch();
}