#include<stdio.h>
#include<stdlib.h>
#define size 10
int a[size],f=-1,r=-1;
void enqueue();
void dequeue();
void display();
int main()
{
    int i,n;
    do{
        printf("\n\nmain menu\n1.enqueue\n2.dequeue\n3.display\nenter the option: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("invalid input\n");
        }

    }while(n<=4);
    return 0;

}
void enqueue()
{
    if(r==size-1)
    {
        printf("overflow\n");

    }
    else if(r==-1)
    {
        f++;
        r++;
        scanf("%d",&a[r]);
    }
    else
    {
        int v,i,j;
        scanf("%d",&v);          
        for(i=f;i<=r;i++)
        {
            if(a[i]<=v)
            {
                for(j=r;j>=i;j--)
                {
                    a[j+1]=a[j];
                }
                
                break;
            }
        }
        a[i]=v;
        r++;
    }

}
void dequeue()
{
    printf("enter the value to be deleted: ");
    int v;
    scanf("%d",&v);
    if(f==-1)
    {
        printf("underflow\n");

    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        int i,j;
        for(i=f;i<=r;i++)
        {
            if(v==a[i])
            {
                for(j=i;j<=r;j++)
                {
                    a[j]=a[j+1];
                }
                r--;
            break;
            }
            
        }
    
    if(i>r+1)
    {
        printf("element not found");
    }
    }
}
void display()
{
    if(f==-1)
    {
        printf("underflow");
    }
    else
    {
        int i;
        for(i=f;i<=r;i++)
        {
            printf("%d ",a[i]);
        }
    }
}