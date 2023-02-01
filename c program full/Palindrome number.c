#include<stdio.h>
int main()
//when sum of numbers are same as input number then we call it palindrome number
{
    int num,temp,rem,sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    temp = num;

    while (temp!=0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    if (num == sum)
        printf("Palindrome number");
    else
        printf("Not palindrome number");

    getch ();
}
