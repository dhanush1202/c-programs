#include<stdio.h>
#include<conio.h>
struct name
{
    char a[200];
}b[500];

int main()
{
    int i,n,j,t=0;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",b[i].a);
    }
    fflush(stdin);
    scanf("%c",&c);
    for(i=0;i<n;i++)
    {
        
        {
            if(b[i].a[0]==c)
            {
                printf("\n%s\n",b[i].a);
            }
        }
    }
    
    return 0;

}