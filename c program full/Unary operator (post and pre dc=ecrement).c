#include<stdio.h>
int main ()
{
    int p,q,a,b;
    printf("enter any number for post decrement: ");
    scanf("%d", &p);
    q = p--;
    printf("p = %d\n",p);
    printf("q = %d\n",q);
    printf("enter any number for pre-decrement: ");
    scanf("%d", &a);
    b = --a;
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}
