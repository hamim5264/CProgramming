#include<stdio.h>

void power(double base, double exp)
{
    double result=1, i;
    for(i=1; i<=exp; i++)
    {
        result = result * base;
    }
    printf("%lf", result);
}
int main ()
{
    double base, exp;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter exp : ");
    scanf("%lf", &exp);

    power (base, exp);

    getch ();
}
