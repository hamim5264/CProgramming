//lower case to upper case using library function.
#include<stdio.h>
int main()
{
    char lower, upper ;
    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("The uppercase letter is: %c", upper);

    getch ();
}
