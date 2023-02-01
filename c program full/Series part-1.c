// 1 + 2 + 3 + 4 + ........ + n.

#include<stdio.h>
int main()
{
    int num, x, sum=0;
    printf("Enter the last numbers of series: ");
    scanf("%d", &num);

    for (x=0; x<=num; x=x+1)
    {
        sum = sum + x;
    }
    printf("1 + 2 + 3 + ....... + %d = %d", num, sum);
    getch ();
}
