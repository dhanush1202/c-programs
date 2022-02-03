#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    int n,i,j,p,f;
    printf("enter the main string: ");
    gets(a);
    printf("second string: ");
    gets(b);
    printf("enter position: ");
    scanf("%d",&p);
    n=strlen(b);
    f=strlen(a);
    for(i=p,j=n+p;i<n+p;i++,j++)
    {
        a[j]=a[i];
    }
    for(i=p,j=0;j<n;i++,j++)
    {
        a[i]=b[j];
    }
    printf("%s",a);
    getch();
}