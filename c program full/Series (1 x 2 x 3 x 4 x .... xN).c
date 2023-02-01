//1 x 2 x 3 x 4 x ..... xn
#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        result = result * i;
        if (i==1)
            printf("%d x ",i);
            else if (i==n)
            printf("%d ", i);
        else
            printf("%d x ",i);
    }
    printf(" = %d",result);
}
