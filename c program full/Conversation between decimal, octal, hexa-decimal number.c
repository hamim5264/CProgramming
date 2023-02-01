/*
format specifier :
for decimal number : %d
for octal number : %c
for hexa-decimal number : %x
*/
#include<stdio.h>
int main ()
{
    int number ;
    printf("Enter any decimal number : ");
    scanf("%d", &number);
    printf("The octal number is: %o\n", number);
    printf("The hexa-decimal number is: %x", number);

    getch ();
}
