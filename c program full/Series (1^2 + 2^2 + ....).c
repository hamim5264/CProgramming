// 1^2 + 2^2 + 3 ^2 + ...... n
#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        sum = sum + i * i;
    }
    printf("1^2 + 2^2 + 3^2 + ....... %d = %d", n,sum);
    getch ();

}
