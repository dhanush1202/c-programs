#include<stdio.h>
#include<conio.h>
#include<string.h>


int  main(){
    char a[50],b[50];
    int i,j,p=0,t,e,f;
    printf("enter string1: ");
    gets(a);
    printf("enter string2: ");
    gets(b);
    t=strlen(a);
    e=strlen(b);
    for(i=0;i<t;i++)
    {
        if(b[0]==a[i])
        {
            
        for(f=i,j=0;j<e;j++,f++)
        {
            if(a[f]==b[j])
            p++;
        }
    }
    }
    if(p>=e)
    printf("substring %s is exists",b);
    else
    printf("substring %s is not exists",b);
    return 0;
    }