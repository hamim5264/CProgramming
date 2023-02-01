#include<stdio.h>
int main()
{
    int p,q;
    printf("enter any number for pre-incremnet: ");
    scanf("%d", &p);
    q = ++p;
    printf("p = %d\n",p);
    printf("q = %d",q);
    return 0;
}
