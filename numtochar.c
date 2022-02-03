#include<conio.h>
#include<stdio.h>
int main()
{
    int n,a;
    char c[11][15]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    printf("enter the number: ");
    scanf("%d",&n);
    if(n<10)
    printf("%d = %s",n,c[n]);
    if(n>10)
    {
        a=n/10;
        int r=n%10;
        printf("%d = %s %s",n,c[a],c[r]);
    }
    return 0;
}