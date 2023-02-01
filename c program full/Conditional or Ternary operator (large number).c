#include<stdio.h>
int main ()
{
    int a,b,result;
    printf("Enter two integer numbers: ");
    scanf("%d %d",&a, &b);

    result = (a>b) ? a : b ;  //conditional operator
    printf("Large number is: %d", result);
    getch ( );
}
