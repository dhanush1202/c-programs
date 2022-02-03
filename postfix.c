#include<stdio.h>
#include<stdlib.h>
#define size 100
char a[size];
int t=-1;
char d;
int stack[size];
void operations();
int main()
{
    printf("enter the postfix expression: ");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            a[i]=a[i]-'0';  
            
            t++;
            stack[t]=a[i];
        }
        else
            {
            
            d=a[i];
            operations();
            }
        
    }
    
    printf("%d",stack[t]);
    return 0;
}
void operations()
{
    switch(d)
    {
        case '+':                                     
        stack[t-1]=stack[t]+stack[t-1];
        t--;
        break;
        case '-':
        stack[t-1]=stack[t]-stack[t-1];
        t--;
        break;
        case '*':
        stack[t-1]=stack[t]*stack[t-1];
        t--;
        break;
        case '/':
        stack[t-1]=stack[t]/stack[t-1];
        t--;
        break;
        case '%':
        stack[t-1]=stack[t]%stack[t-1];
        t--;
        break;
        
    }
}