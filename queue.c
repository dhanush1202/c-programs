#include<stdio.h>
#include<stdlib.h>
#define size 5
int n,f=-1,r=-1;
int a[size];
void enqueue();
void dequeue();
void display();
int main()
{
    int c;
    do{
        printf("main menu\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter your option: ");
        scanf("%d",&c);
        switch(c)
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
    
    }while(c<=4);
return 0;
}
void enqueue()
{
    int data;
    scanf("%d",&data);
    
    if(r==size-1)
    {
        printf("overflow\n");

    }
    else if(r==-1)
    {
        f++;
        r++;
        a[r]=data;
    }
    else
    {
        r++;
        a[r]=data;
    }


}
void dequeue()
{
    
    if(f==-1)
    {
        printf("underflow\n");

    }
    else
    {
        f++;
        
    }
}
void display()
{
    if(f==-1)
    {
        printf("queue is empty\n\n");
    }
    else
    {
        for(int i =f;i<=r;i++)
        {
            printf("%d\n",a[i]);
        }
        printf("\n");
    }
}