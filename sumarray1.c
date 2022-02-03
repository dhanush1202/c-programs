#include<stdio.h>
int main()
{
    int a[500],i,j,n,sum=0,rem,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            rem=a[i]%10;
            sum+=rem;
            a[i]=a[i]/10;

        }
        
    }
    
        while(sum>0)
        {
            rem=sum%10;
            t+=rem;
            sum=sum/10;
        }
        printf("%d",t);
    return 0;
}