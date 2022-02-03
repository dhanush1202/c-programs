#include<conio.h>
#include<stdio.h>
void main()
{
 int a[3][3],i,j,b[3][3],k,c[3][3];
 clrscr();
 printf("enter the elements in matrix1: ");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
  printf("enter the elements in matrix2: ");
  for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 printf("the matrix a: \n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%d  ",a[i][j]);
 }
 printf("\n");
 }
 printf("the matrix b: \n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%d  ",b[i][j]);
 }
 printf("\n");
 }
 printf("the sum of matrices is: \n");

  for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 c[i][j]=0;
 for(k=0;k<3;k++)
 {
 c[i][j]= c[i][j] + a[i][k] *b[k][j];
 }
 }
 }
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%d  ",c[i][j]);
 }
 printf("\n");
}
  getch();
 }