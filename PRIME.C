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
struct node* create();
void display();
void search();
void insertend();
int main()
{
int c;
do{
printf("main menu\n1.create\n2.display\n3.search\n4.insertend\nenter the option: ");
scanf("%d",&c);
switch(c)
{
case 1:
start=create();
break;
case 2:
display();
break;
case 3:
search();
break;
case 4:
insertend();
break;
case 5:
exit(0);
default:
printf("invalid input");
}
}while(c<=5);
return 0;
}
struct node* create()
{
nn=(struct node*)malloc(sizeof(struct node));
printf("enter the value: ");
scanf("%d",& nn->data);
nn->link=NULL;
if(start==NULL)
{
start=nn;
}
else
{
ptr=start;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=nn;
}
return start;
}
void display()
{
if(start==NULL)
printf("empty ll");
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
void search()
{
int c,d=0;
printf("enter the searchkey: ");
scanf("%d",&c);
ptr=start;
while(ptr!=NULL)
{
d++;
if(ptr->data==c)
{
printf("element found at %d",d);
break;
}
ptr=ptr->link;
}
}
void insertend()
{
nn=(struct node*)malloc(sizeof(struct node));
printf("enter the value: ");
scanf("%d",& nn->data);
nn->link=NULL;
ptr=start;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=nn;

}