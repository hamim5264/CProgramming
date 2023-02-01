#include<stdio.h>
int main ()
{
    int initialnum, finalnum,temp,rem,x,sum=0;
    printf("Enter initial value: \n");
    scanf("%d", &initialnum);

    printf("Enter final value: \n");
    scanf("%d", &finalnum);

    for (x=initialnum; x<=finalnum; x++)
    {
        temp = x ;
        while (temp!=0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }
        if (sum == x)
        {
            printf("%d\t", x);
        }
        sum = 0;
    }
}
