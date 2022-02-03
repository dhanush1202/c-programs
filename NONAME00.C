#include<conio.h>
#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    printf("Diameter: %f\n",2*a);
    printf("Area: %f\n",(22*a*a)/7);
    printf("Circumference: %f\n",(22*2*a)/7);
    return 0;
}