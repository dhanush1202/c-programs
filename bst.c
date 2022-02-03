#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* left;
    int data;
    struct node* right;
};
struct node* start=NULL;
struct node* ptr=NULL;
struct node* nn=NULL;
struct node* parent=NULL;
struct node* insert();
void del();
void dellast();
void delleft();
void delright();
void delboth();
void traversals();
void inorder(struct node* );
void preorder(struct node* );
void postorder(struct node* );

void search();
void main()
{
    int op;
    do{
        printf("main menu\n1.insert\n2.delete\n3.traversals\n4.search\n5.exit\n\n");
        printf("enter the option: ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            start=insert();
            break;
            case 2:
            del();
            break;
            case 3:
            traversals();
            break;
            case 4:
            search();
            break;
            case 5:
            exit(0);
            default:
            printf("\ninvalid input\n");
        }
    }while(op<=5);
}

struct node * insert()
{
    int n;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&nn->data);
    nn->left=NULL;
    nn->right=NULL;
    if(start==NULL)
    {
        start=nn;

    }
    else
    {
       ptr=start;
       while(ptr!=NULL)
       {
           parent=ptr;
           if(nn->data>ptr->data)
           {
               ptr=ptr->right;

           }
           else
           {
               ptr=ptr->left;
           }
       }
       if(nn->data>parent->data)
       {
           parent->right=nn;
       }
       else
       {
           parent->left=nn;
       }
    }
    }
    return start;
}

void traversals()
{
    int d;
    printf("1.inorder\n2.preorder\n3.postorder\n4.main menu\nenter the option: ");
    scanf("%d",&d);
    ptr=start;
    switch(d)
    {
        case 1:
        inorder(ptr);
        break;
        case 2:
        preorder(ptr);
        break;
        case 3:
        postorder(ptr);
        break;
        case 4:
        main();
        break;
        default:
        printf("invalid input\n");

    }
}

void inorder(struct node* ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d,",ptr->data);
        inorder(ptr->right);
    }
}

void preorder(struct node* ptr)
{
    if(ptr!=NULL)
    {

        printf("%d,",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder(struct node* ptr)
{
    if(ptr!=NULL)
    {

        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d,",ptr->data);
    }
}
void search()
{
    printf("enter the search key: ");
    int a;
    scanf("%d",&a);
    ptr=start;
    while(ptr!=NULL)
    {
        parent=ptr;
        if(a>ptr->data)
        {
            ptr=ptr->right;
        }
        else if(a==ptr->data)
        {
            printf("element found\n");
            break;
        }
        else
        {
            ptr=ptr->left;
        }
    }
    if(ptr==NULL)
    {
        printf("element not found\n");
    }
}
void del()
{
    search();
if(ptr->left==NULL&&ptr->right==NULL)
{
dellast();

}
else if(ptr->left!=NULL&&ptr->right==NULL)
{
    delleft();
}
else if(ptr->left==NULL&&ptr->right!=NULL)
{
    delright();
}
else if(ptr->left!=NULL&&ptr->right!=NULL)
{
    delboth();
}


}
void dellast()
{
     
     if(parent->right==ptr)
     {
         parent->right=NULL;
         free(ptr);
     }
     else
     {
         parent->left=NULL;
         free(ptr);
     }
     
}
/*left node is present*/
void delleft()
{

     if(parent->right==ptr)
     {
         parent->right=ptr->left;
         ptr->left=NULL;
         free(ptr);
     }
     else
     {
         parent->left=ptr->left;
         ptr->left=NULL;
         free(ptr);
     }
     
}
/*right node is present*/
void delright()
{

     if(parent->right==ptr)
     {
         parent->right=ptr->right;
         ptr->right=NULL;
         free(ptr);
     }
     else
     {
         parent->left=ptr->right;
         ptr->right=NULL;
         free(ptr);
     }
     
}
void delboth()
{
struct node* t1;
t1=ptr->right;
if(t1->left==NULL&&t1->right==NULL)
{
    if(parent->left==ptr)
    {
        t1->left=ptr->left;
        parent->left=t1;
        ptr->right=NULL;
        free(ptr);
    }
    else
    {
        t1->left=ptr->left;
        parent->right=t1;
        ptr->right=NULL;
        free(ptr);
    }
}
 else if(t1->left==NULL&&t1->right!=NULL)
 {
   ptr->data=t1->data;
   ptr->right=t1->right;
   t1->right=NULL; 
   free(t1);

 }
 else if(t1->left!=NULL)
 {
ptr->data=t1->left->data;
free(t1->left);
t1->left=NULL;


 }
}