//uppercase to lower case letter using library function.
#include<stdio.h>
int main()
{
    char upper, lower ;
    printf("Enter any uppercase letter : ");
    scanf("%c", &upper);
    lower = tolower(upper);
    printf("The lowercase letter is: %c", lower);

    getch ();
}
