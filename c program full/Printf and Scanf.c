//print any numbers from user.
#include<stdio.h>
int main()
{
    int num1 ;
    float num2 ;
    double num3 ;
    printf("enter an integer number :");
    scanf("%d", &num1);
    printf("enter floating number :");
    scanf("%f", &num2);
    printf("enter an double number :");
    scanf("%lf", &num3);


    printf("numbers are:\n %d\n %f\n %lf", num1, num2, num3);
    return 0;
}
