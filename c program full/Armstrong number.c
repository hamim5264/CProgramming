#include<stdio.h>
int main ()
//when sum of every cubic numbers are same as input number then we call it armstrong number.
{
    int num, temp,rem,sum=0;
    printf("Enter any numbers: ");
    scanf("%d", &num);
    temp = num;

    while (temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem * rem *rem;
        temp = temp / 10;
    }
    if (sum==num)
        printf("Your entered number is Armstrong number");
    else
        printf("Your entered number is not Armstrong number");

    getch ();
}
