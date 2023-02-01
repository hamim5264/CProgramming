#include<stdio.h>
int main()
{
    int num, temp, rem, fact, i, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    temp = num ;

    while (temp!=0)
    {
        rem = temp % 10;
        fact = 1;
        for (i=1; i<=rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum==num)
        printf("Your entered number is STRONG number");
    else
        printf("Your entered number is not STRONG number");
    getch ();
}
