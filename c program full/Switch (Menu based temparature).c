#include<stdio.h>
int main()
{
    int choice;
    float x,y;
    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
    {
        printf("Enter Fahrenheit temperature: ");
        scanf("%f",&x);
        y = (x-32)/1.8;
        printf("The Celsius value is: %f", y);
        break;
    }
    case 2:
    {
        printf("Enter Celsius temperature: ");
        scanf("%f",&x);
        y = (1.8 * x) + 32;
        printf("The Fahrenheit value is: %f\n", y);

    }
    default :
        printf("Not a valid choice");
    }
    getch ();
}
