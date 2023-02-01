//1 + 1/2 + 1/3 + ...... n
#include<stdio.h>
int main ()
{
    double n,i,sum=0;
    printf("enter the value  of n : ");
    scanf("%lf", &n);
    for (i=1; i<=n; i++)
    {
        sum = sum + (1/i);
        if (i==1)
            printf("%lf + ",i);
        else if (i==n)
            printf("(1/%lf)", i);
        else
            printf("(1/%lf) + ", i);
    }
    printf(" = %lf\n",sum);
    getch ();
}
