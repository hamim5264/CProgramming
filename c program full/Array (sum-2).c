#include<stdio.h>
int main ()
{
    int a[10], i, sum=0;
    printf("enter 10 numbers for sum & average:\n");
    for (i=0; i<10; i++)
    {
        scanf ("%d", &a [i] );
    }
    for (i=0; i<10; i++)
    {
        sum = sum + a[ i ];
    }
    printf("Sum = %d\n", sum);
    printf("Average = %f", (float) sum/10);

    getch ();
}
