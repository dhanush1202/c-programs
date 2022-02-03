int array(int [],int )
int main()
{
    int a[50],n,i,c;
    clrscr();
    c=array(a,n);
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    getch():
    
}
int array(int a[50],n)
{
    printf("enter the array size: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    return a;
}