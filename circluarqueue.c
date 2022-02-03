#include<stdio.h>
#include<stdlib.h>
#define size 10
int cq[size],f=-1,r=-1,val;
void enqueue();
void dequeue();
void display();
int main()
{
    int op;
    do
    {
        printf("***main menu***\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter the option: ");
        scanf("%d",&op);
        switch(op)
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
            printf("invalid input");
            
            
        }
    }while(op<=4);
    return 0;
}
void enqueue()
{
    int val;
    printf("enter the value: ");
    scanf("%d",&val);
    if(((r==size-1)&&f==0)||(f==r+1))
    {
        printf("overflow\n");
    }
    else if(f==-1&&r==-1)
    {
        r++;
        f++;
        cq[r]=val;
    }
    else if(r==size-1&&f!=0)
    {
        r=0;
        cq[r]=val;
    }
    else
    {
        r++;
        cq[r]=val;
    }
}
void dequeue()
{
    if(f==-1)
    {
        printf("underflow\n");
    }
    else if(f==r)
    {
        f=-1;
        r=-1;

    }
    else if(f==size-1)
    {
        f=0;
    }
    else
    {
        f++;
    }

}
void display()
{
    if(f==-1&&r==-1)
    {
        printf("underflow");
    }
    else if(f<=r)
    {
        for(int i=f;i<=r;i++)
        {
            printf("%d\n",cq[i]);
        }
    }
    else
    {
        for(int i=f;i<size;i++)
        {
            printf("%d\n",cq[i]);
        }   
        for(int i=0;i<=r;i++)
        {
            printf("%d\n",cq[i]);
        }
    }
}