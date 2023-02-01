#include<stdio.h>
int main()
{
    int x,y;
    printf("enter any number for post increment: ");
    scanf("%d", &x);
    y = x++;
    printf("x = %d\n",x);
    printf("y = %d",y);
    return 0;
}
