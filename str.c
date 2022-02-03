#include<stdio.h>
int mian()
{
    char s[50],m[50];
    int a,b,c;
    int d;
    scanf("%s%s",s,m);
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("Name: %s\nDOB: %s %d %d\nMobile:%d-%d",s,m,a,b,c,d);
    return 0;
}