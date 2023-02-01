//Capital ASCII value starts with 65 and small ASCII value starts with 67
#include<stdio.h>
int main()
{
    char  upper;

    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);
    printf("The uppercase letter is: %c", upper+32);
    getch ();
}
