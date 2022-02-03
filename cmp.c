#include<stdio.h>
int main(int argc,char *argv[])
{
    int a,b,c;
    a=argv[1]-'0';
    b=argv[2]-'0';
    c=a+b;
    printf("%d",c);
    return 0;
}