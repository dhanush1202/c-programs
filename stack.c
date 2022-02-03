#include<stdio.h>
#include<stdlib.h>
#define max 5
int s[max],top=-1;
void push();
void pop();
void peek();
void display();
void main()
{
    int op;
    do{
        printf("main menu\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n\n");
        printf("enter the option: ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("\ninvalid input\n");
        }
    }while(op<=5);
}
void push()
{
    int val;
    printf("enter the value: ");
    scanf("%d",&val);
    if(top==max-1)
    {
        printf("overflow\n");

    }
    else{
        top++;
        s[top]=val;
    }

}
void pop()
{
    
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        
        printf("\n%d is deleted\n",s[top]);
        top--;

    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("%d is top element",s[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    }
}