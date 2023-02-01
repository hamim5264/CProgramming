#include<stdio.h>
double trianglearea (double base, double height);
int main ()
{
    double base, height;
    printf("Enter Base: ");
    scanf("%lf", &base);
    printf("\nEnter height : ");
    scanf("%lf", &height);
    double area = trianglearea (base, height);
    printf("Area = %lf", area);
}
double trianglearea (double base, double height)
{
    return 0.5 * base * height;
}
