#include<stdio.h>
int main()
{
    int a, b, fact=1;
    printf("Enter any number for factorial: ");
    scanf("%d",&a);
    for (b=1; b<=a; b++)
    {
        fact = fact * b;
    }
        printf("%d", fact);


    getch ();
}
