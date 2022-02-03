#include<conio.h>
#include<stdio.h>

int main(){
 int i=1,a,s=0;
 clearerr;
 printf("enter any number: ");
 scanf("%d",&a);
 while(i<=a)
 {
  s=s+i;
  i+=2;
  }
  printf("%d",s);
  return 0;
  }
