
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* link;
};
struct node* start=NULL;
struct node* ptr=NULL;
struct node* nn=NULL;
struct node* append();
struct node* addbegin();
struct node* addbef();
struct node* delbegin();
struct node* dellast();
struct node* delafter();
struct node* delnode();
void display();
void search();
void length();
void addlast();
void addafter();
void main()
{
    int op;
    do{
        printf("\n\nmain menu\n1.append\n2.display\n3.search\n4.length\n5.addbegin\n6.addlast\n7.addafter\n8.addbef\n9.delbegin\n10.dellast\n11.delafter\n12.delnode\n13.exit\n\n");
    printf("enter the option: ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        start=append();
        break;
    
    case 2:
        display();
        break;
    
    case 3:
        search();
        break;
    case 4:
        length();
        break;
    case 5:
        start=addbegin();
        break;
    case 6:
        addlast();
        break;
    case 7:
        addafter();
        break;
    case 8:
        start=addbef();
        break;
    case 9:
        start=delbegin();
        break;
    case 10:
        start=dellast();
        break;
    case 11:
        start=delafter();
        break;
    case 12:
        start=delnode();
        break;
        
    case 13:
        exit(0);
    
    default:printf("invalid input\n");
    }
    }while(op<=13);
    getch();
}
struct node* append()
{
    int i,n;
    printf("enter number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",& nn->data);
    if(start==NULL)
    {
        start=nn;
        start->link=nn;
    }
    else
    {
        ptr=start;
        while(ptr->link!=start)
        {
            ptr=ptr->link;
        }
        ptr->link=nn;
        nn->link=start;
    }
    }
    return start;
}
void display()
{
    if(start==NULL)
    {
        printf("no list present");
    }
    else
    {
        ptr=start;
        while(ptr->link!=start)
        {
            printf("%d\n", ptr->data);
            ptr=ptr->link;
        }
        printf("%d\n\n",ptr->data);
    }
}
void search()
{
    int n,c=0;;
    printf("enter search key: ");
    scanf("%d",&n);
    ptr=start;
    while(ptr->link!=start)
    {
        c++;
        if(ptr->data==n)
        {
            printf("%d is present in %d index",n,c);
            break;
        }
        ptr=ptr->link;
    }
    if(ptr->link==start)
    {
    if(ptr->data==n)
    {
        printf("%d is present in %d index",n,c+1);
        
    }
    
    else
    {
        printf("element not present");
    }
    }
}
void length()
{
    int c=0;
    ptr=start;
    while(ptr->link!=start)
    {
        c++;
        ptr=ptr->link;
    }
    printf("length: %d",c+1);
}
struct node* addbegin()
{
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d", & nn->data);
    nn->link=start;
    ptr=start;
    while(ptr->link!=start)
    {
        ptr=ptr->link;
    }
    ptr->link=nn;
    start=nn;
    return start;
}
void addlast()
{
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d", & nn->data);
    nn->link=start;
    ptr=start;
    while(ptr->link!=start)
    {
        ptr=ptr->link;
    }
    ptr->link=nn;
}
void addafter()
{
    int c;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d", & nn->data);
    ptr=start;
    if(start==NULL)
    printf("no list present");
    
    
    else
    {
    printf("enter the value after which node to be added: ");
    scanf("%d",&c);
    while(ptr->data!=c)
    {
        ptr=ptr->link;
        if(ptr->link==start)
        break;
    }
    if(ptr->link==start)
    {
        printf("element not found");
    }
    else
    {
    nn->link=ptr->link;
    ptr->link=nn;
    }
    }
}
struct node* addbef()
{
    int n;
    struct node * pre;
   nn=(struct node*)malloc(sizeof(struct node));
   printf("enter the data: ");
   scanf("%d",& nn->data);
   printf("enter the value before which node to be added: ");
   scanf("%d",&n);

   if(start->data==n)
   {
       ptr=start;
       while(ptr->link!=start)
       {
           ptr=ptr->link;
       }
       nn->link=start;
       ptr->link=nn;
       start=nn;
   }
   else
   {
       ptr=start;
       while(ptr->link!=start)
       {
            if(ptr->data==n)
           {
               break;
           }
           pre=ptr;
          
           ptr=ptr->link;
           
       }
       {
           pre->link=nn;
           nn->link=ptr;
       }
       if(ptr->data!=n)
       {
           printf("element not found");
       }
   }
    return start;

}
struct node* delbegin()
{
    struct node* temp;
    ptr=start;
    while(ptr->link!=start)
    {
        ptr=ptr->link;
    }
    temp=start;
    start=start->link;
    ptr->link=start;
    free(temp);
    return start;
}
struct node* dellast()
{
    struct node* pre;
    ptr=start;
    while(ptr->link!=start)
    {
        pre=ptr;
        ptr=ptr->link;
    }
    pre->link=start;
    
    free(ptr);
    return start;
}
struct node* delafter()

{
    struct node* post;
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    ptr=start;
    while(ptr->data!=n)
    {
       
        ptr=ptr->link;
        if(ptr->link==start)
        break;

    } 
    if(ptr->data!=n)
        printf("element not found");
    else if(ptr->link==start)
        {
            post=ptr->link;
            ptr->link=post->link;
            start=post->link;
            free(post);
        }
    else
    {

    
    post=ptr->link;
    ptr->link=post->link;
    free(post);
    }
    return start;
}
struct node* delnode()
{
    int n;
    struct node* pre;
    printf("enter the value to be deleted: ");
    scanf("%d",&n);
    if(start->data==n)
    {
        
        while(ptr->link!=start)
        {
            ptr=ptr->link;
        }
        start=start->link;
        ptr->link=start;
    }
    else
    {
    ptr=start;
    while(ptr->data!=n)
    {
        pre=ptr;
        ptr=ptr->link;
        if(ptr->link==start)
        break;
    }
    if(ptr->data!=n)
    {
        printf("no node to delete\n");
    }
    else if((ptr->link==start) &&(ptr->data==n))
    {
        pre->link=start;
        free(ptr);
    }
    
    else
    {
        pre->link=ptr->link;
        free(ptr);
    }
    }
    return start;    
}