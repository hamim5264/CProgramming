#include<stdio.h>

int square (int a)
{
    return a * a;
}
int main()
{
    int num, result;
    printf("Enter an integer number for square : ");
    scanf("%d", &num);
    result = square (num);
    printf("Result = %d", result);

    getch ();
}
