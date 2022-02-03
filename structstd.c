#include<conio.h>
#include<stdio.h>
struct student
{
    char name[10][20];
    int marks[10][100];
    char grade;
    float avg[20];
}s;
int main()
{
    int i,j,sum[50],n;
    printf("enter the no of stdents: ");
    scanf("%d",&n);
    printf("enter student name,marks in 4sub: ");
    for(i=0;i<n;i++)
    {
        gets(s.name[i]);
        for(j=0;j<4;j++)
        scanf("%d",&s.marks[i][j]);
    }
    for(i=0;i<n;i++)
    {
        sum[i]=0;
        for(j=0;j<4;j++)
        {
        sum[i]+=s.marks[i][j];
        }
        s.avg[i]=(float)sum[i]/3;
        if(sum[i]>9)
        s.grade='A';
        else if(sum[i]>8)
        s.grade= 'B';
        else
        s.grade= 'F';
                
    }
    printf("student\ttotal\tgrade");
    for(i=0;i<n;i++)
    printf("%s\t%d\t%c\n",s.name[i],sum[i],s.grade);
    
    return 0;
        }
