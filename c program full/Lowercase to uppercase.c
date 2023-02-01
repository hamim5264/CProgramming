#include<stdio.h>
int main()
{
    char n;
    printf("Enter any lowercase letter: ");
    scanf("%c", &n);
    printf("The uppercase letter is: %c", n-32);
    return 0;
}
