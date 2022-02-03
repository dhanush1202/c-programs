#include<stdio.h>
#include<stdlib.h>
struct node
{
    int no;
    char todo[100];
    struct node* next;
};
struct node* nn=NULL;
struct node* ptr=NULL;
struct node* start=NULL;
struct node* add();
struct node* del();
void display();
struct node* afi();
void numbers();
int q=0;
int main()
{
    int a;
    do{
        printf("\n\ntodo list menu:\n1.add task\n2.delete task\n3.display all tasks\n4.add task at a particular index\n5.exit\nenter your choice: ");
        scanf("%d",&a);
        if(a>=1&&a<=9)
        {
        switch(a)
        {
            case 1:
            start=add();
            break;
            case 2:
            start=del();
            break;
            case 3:
            display();
            break;
            case 4:
            start=afi();
            break;
            case 5:
            exit(0);
            default:
            printf("invalid input\n\n");
        }
        }
        else
        {
            printf("invalid input\n");
           break;
        }
    }while(a<=5);
    return 0;
}
struct node* add()
{
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the task: ");
    scanf("%s",nn->todo);
    if(start==NULL)
    {
        start=nn;
        nn->next=NULL;
        nn->no=1;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=nn;
        nn->next=NULL;
        nn->no=ptr->no+1;
    }
    q++;
    return start;

}
struct node* del()
{
   struct node* pre;
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    if(q==1)
    {
        start=NULL;
        ptr=NULL;
        nn=NULL;
        q--;
        display();
    }
    if(start->no==n)
    {
        printf("you just completed %s task",start->todo);
        start=start->next;
        
    }
    else
    {
    ptr=start;
    while(ptr->no!=n&&ptr!=NULL)
    {
        pre=ptr;
        ptr=ptr->next;
    }
    pre->next=ptr->next;
     printf("you just completed %s task",ptr->todo);
    free(ptr); 
    }
    q--;
    numbers();
    return start;
    
}

void display()
{
    printf("\n\n");
    if(start==NULL)
    {
        printf("Congratulations! you completed all the tasks...\n\n\n");
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d) %s\n",ptr->no,ptr->todo);
            ptr=ptr->next;
        }
    }
}
struct node* afi()
{
    struct node* pre;
    int a;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the index at which task to be added: ");
    scanf("%d",&a);
    printf("enter the task: ");
    scanf("%s",nn->todo);
    if(start->no==a)
    {
        nn->next=start;
        start=nn;
    }
    else
    {
    
    ptr=start;
    while(ptr->no!=a&&ptr!=NULL)
    {
        pre=ptr;
        ptr=ptr->next;
    }
    
    pre->next=nn;
    nn->next=ptr;
    if(ptr==NULL)
    {
        printf("cannot add element\n\n");
    }
    }
    printf("task %s added at %d",nn->todo,a);
    q++;
    numbers();
    return start;
}


void numbers()
{
    int c=1;
    ptr=start;
    while(ptr!=NULL)
    {
        ptr->no=c;
        c++;
        ptr=ptr->next;
    }
}