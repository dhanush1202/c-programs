#include<conio.h>
#include<stdio.h>
int exp(int,int);

void main()
{
    int x,y,c;
    printf("enter value of x,y: ");
    scanf("%d%d",&x,&y);
    
    c = exp(x,y);
    printf("x^y=%d",c);
}
int exp(int x, int y)
{
    
    if(y==0)
    return 1;
    else if (y==1)
    return x;
    else
    return x*exp(x,y-1);
}