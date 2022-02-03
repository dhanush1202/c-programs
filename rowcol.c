#include<conio.h>
#include<stdio.h>

int main()
{
 int a[30][30],i,j,r,c,rs,cs;
 printf("enter the row and column size: ");
 scanf("%d%d",&r,&c);
 printf("enter the elements in matrix: ");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("matrix:\n");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("%d\t",a[i][j]);
     }printf("\n");
 }
 for(i=0;i<r;i++)
 {  
    rs=0;
    for(j=0;j<c;j++)
    {
        rs+=a[i][j];
    }
    printf("row sum= %d\n",rs);
 }
 for(j=0;j<c;j++)
 {
     cs=0;
     for(i=0;i<r;i++)
     cs+=a[i][j];
     printf("column sum= %d\n",cs);
 }
 
 return 0;
 }