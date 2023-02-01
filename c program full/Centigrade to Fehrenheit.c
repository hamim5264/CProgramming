//  F = (1.8 * C) + 32
#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the value of centigrade: \n");
    scanf("%f", &C);

    F = (1.8 * C) + 32 ;
    printf("The value of fahrenhiet:\n%f", F);

    getch();
}


