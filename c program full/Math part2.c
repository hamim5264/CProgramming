/*
1. round function means it will round the number your pressed
if the number floating is 0.1-0.4 then it will round the original number you pressed
but it the floating is 0.5-0.9 then it will round the convert the number to next number

2. trunc function means it will convert the floating number to integer number.

3. ceil function means it will upgrade the floating number to its closet number.

4. floor function means it will downgrade the floating number to its closet number.
*/
#include<stdio.h>
int main()
{
    double p, result1;
    double q, result2;
    double r, result3;
    double s, result4;

    printf("Enter floating number for round figure: ");
    scanf("%lf", &p);
    result1 = round(p);
    printf("Round figure of your number is: %lf\n", result1);

    printf("Enter floating number for trunc figure: ");
    scanf("%lf", &q);
    result2 = trunc(q);
    printf("trunc figure of your number is: %lf\n", result2);

    printf("Enter floating number for ceilling figure: ");
    scanf("%lf", &r);
    result3 = ceil(r);
    printf("ceilling figure of your number is: %lf\n", result3);

    printf("Enter floating number for floor figure: ");
    scanf("%lf", &s);
    result4 = floor(s);
    printf("floor figure of your number is: %lf", result4);

    getch ();
}

