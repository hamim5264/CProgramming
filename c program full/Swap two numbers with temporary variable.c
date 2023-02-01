#include<stdio.h>
int main()
{
    int N1=99;
    int N2=66;
    int temp;

    temp = N1;
    N1 = N2;
    N2 = temp;

    printf("Number 1 = %d\n", N1);
    printf("Number 2 = %d", N2);

    return 0 ;
}
