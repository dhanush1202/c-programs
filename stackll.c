#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* start=NULL;
struct node* ptr=NULL;
struct node* nn=NULL;
struct node* push();
struct node* pop();
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
struct node* push()
{
nn=(struct node*)malloc(sizeof(struct node));
printf("enter the value: ");
scanf("%d",& nn->data);
if (start==NULL)
{
    nn->link=NULL;
    start=nn;
}
else
{
    nn->link=start;
    start=nn;
}
return start;

}
struct node* pop()
{
    struct node* temp;
    if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
        temp=start;
        start=start->link;
        free(temp);
    }
    return start;
}
void peek()
{
    if(start==NULL)
    {
        printf("underflow");

    }
    else
    {
        printf("%d\n",start->data);
    }
}
void display()
{
    if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
    }
}