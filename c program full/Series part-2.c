// 1 + 3 + 5 + ....... + n.

#include<stdio.h>
int main()
{
    int num, sum = 0, a = 1;
    printf("Enter the last number of series: ");
    scanf("%d", &num);

    while (a<=num)

    {
        sum = sum + a ;
        a = a + 2;
    }
    printf("1 + 3 + 5 + ....... + %d = %d", num, sum);

    getch ();
}
