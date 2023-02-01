//get sum, subtraction, multiplication, devision using arithmetic operation.
#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter any two number: ");
    scanf("%d %d", &num1, &num2);
    result = num1 + num2;
    printf("The sum is: %d\n", result);

    result = num1 - num2;
    printf("The subtraction is: %d\n", result);

    result = num1 * num2;
    printf("The multiplication is: %d\n", result);

    result = num1 / num2;
    printf("The devision is: %d\n", result);

    result = num1 % num2;
    printf("The reminder  is: %d", result);

    getch ();
}
