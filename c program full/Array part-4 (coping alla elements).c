#include<stdio.h>
int main ()
{
    int array1[30], array2[30] ,n, i;
    printf("How many numbers you want to add in array: ");
    scanf("%d", &n);
    printf("Now Enter your numbers: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Array1 = ");
    for (i=0; i<n; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\nArray2 = ");
    for (i=0; i<n; i++)
    {
        printf("%d ", array1[i]);
    }

}
