// C = (F-32) / 1.8

#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the value of fahrenheit: \n");
    scanf("%f", &F);
    C = (F-32)/1.8;
    printf("The value of centigrade:\n%f", C);

    getch () ;
}
