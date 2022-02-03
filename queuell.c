#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* f=NULL;
struct node* r=NULL;
struct node* ptr=NULL;
struct node* nn=NULL;
struct node* enqueue();
struct node* dequeue();
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
            f=enqueue();
            break;
            case 2:
            f=dequeue();
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
struct node* enqueue()
{
    nn=(struct node*)malloc(sizeof(struct node));
    scanf("%d",& nn->data);
    if(r==NULL)
    {
        f=nn;
        nn->link=NULL;
    }
    else
    {
        ptr=f;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=nn;
        nn->link=NULL;
    }
    r=ptr;
    return f;
}
struct node* dequeue()
{
    if(f==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        struct node* temp;
        temp=f;
        f=f->link;
        free(temp);
    }
    return f;
}
void display()
{
    if(f==NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=f;
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
    }
}