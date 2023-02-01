#include<stdio.h>
int main()
{
    int n1, n2, n3, sum;
    float avg;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    sum = n1 + n2 + n3 ;
    printf("Sum = %d\n", sum);

    avg = (float) sum/3 ; //type casting
    printf("Average = %f", avg);

    getch ();
}
