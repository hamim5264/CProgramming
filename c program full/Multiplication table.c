#include<stdio.h>
int main()
{
    while (1) {
    int a,b;
    printf("Enter any number: ");
    scanf("%d", &a);
    for ( b=1; b<=10; b++)
    {
        printf("\t%d X %d = %d\n",a,b, a*b );
    }
    }
    getch ();
}
