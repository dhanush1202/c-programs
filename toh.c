#include<stdio.h>
void toh(int,char, char,char);
int main()
{
    int n;
    printf("enter n value: ");
    scanf("%d",&n);
    toh(n,'s','i','d');
    return 0;
}
void toh(int n,char s,char i, char d)
{
    if(n>0)
    {
        toh(n-1,s,d,i);
        printf("%d %c->%c\n",n,s,d);
        toh(n-1,i,s,d);
    }

}