
#include<stdio.h>
int main()
{
    char a[100];
    char vowel[5]="aeiou";
    char conso[21]="bcdfghjklmnpqrstvwxyz";
    int i,j,vs=0,cs=0,ws=0;
    printf("enter the string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        
        for(j=0;a[j]!='\0';j++)
        {
            if(a[i]==vowel[j]){
            vs+=1;
            break;
            }
            if(a[i]==conso[j])
            {cs+=1;
            break;
            }
            if(a[i]==' ')
            {
                ws+=1;
                break;
            }
        }
    }
        printf("vowels: %d\nconsonants: %d\nwhite spaces: %d",vs,cs,ws);
    return 0;
}