#include<stdio.h>
int main()
{
    double x, result;
    double y, result2;
    double z, result3;
    double p, result4;
    double q, result5;

    printf("Enter the value of x:\n"); //for log calculation
    scanf("%lf", &x);
    result = log(x);
    printf("log (%lf) = %lf\n", x, result);

    printf("Enter the value of y:\n"); //for exp calculation
    scanf("%lf", &y);
    result2 = exp(y);
    printf("exp (%lf) = %lf\n", y, result2);

    printf("Enter the value of z:\n"); //for sin calculation
    scanf("%lf", &z);
    result3 = sin(z);
    printf("sin (%lf) = %lf\n", z, result3);

    printf("Enter the value of p:\n"); //for cos claculation
    scanf("%lf", &p);
    result4 = cos(p);
    printf("cos (%lf) = %lf\n", p, result4);

    printf("Enter the value of q:\n"); //for tan calculation
    scanf("%lf", &q);
    result5 = tan(q);
    printf("tan (%lf) = %lf\n", q, result5);
    return 0;
}
