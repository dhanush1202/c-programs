#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* nn=NULL;
struct node* ptr=NULL;
struct node* start=NULL;
struct node* enqueue();
struct node* dequeue();
void display();
int main()
{
    int i,n;
    do{
        printf("\n\nmain menu\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter the option: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            start=enqueue();
            break;
            case 2:
            start=dequeue();
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

struct node* enqueue()
{
    
    struct node* pre=NULL;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the node data: ");
    scanf("%d",& nn->data);
    if(start==NULL)
    {
       
        nn->link=NULL;
        start=nn;
       
    }
    else if(start->data<=nn->data)
    {
        
        nn->link=start;
        start=nn;

    }
    else
    {
        ptr=start;
        while(ptr->data>=nn->data)
        {
            pre=ptr;
            ptr=ptr->link;
        }
        
        pre->link=nn;
        nn->link=ptr;
        
    }

}
struct node* dequeue()
{
    int v;
    struct node* pre=NULL;
    printf("enter the node data to be deleted: ");
    scanf("%d",&v);
    if(start==NULL)
    {
        printf("no node to delete\n");
    }
    else if(start->data==v)
    {
        ptr=start;
        start=start->link;
        free(ptr);
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->data==v)
            break;
            pre=ptr;
            ptr=ptr->link;
        }
        pre->link=ptr->link;
        free(ptr);

    }

}

void display()
{
    if(start==NULL)
    {
        printf("no list\n");


    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
        printf("\n");

    }
}