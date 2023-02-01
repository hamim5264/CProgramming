#include<stdio.h>
int main ()
{
    int A [3] [3], row, col, sum=0;
    printf("Enter the elements of A matrix :\n");

    for (row=0; row<3; row++)
    {
        for (col=0; col<3; col++)
        {
            printf("A [%d] [%d] = ", row, col);
            scanf("%d", &A[row] [col]);
        }
        printf("\n");
    }

    printf("\nA = ");
    for (row=0; row<3; row++)
    {
        printf("\t");
        for (col=0; col<3; col++)
        {
            printf("%d ", A[row] [col]);
        }
        printf("\n");
    }

    //sum of diagonal elements
   printf("\nDiagonal elements : ");
    for (row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if (row==col)
            {
            printf("%d ",A[row][col]);
            sum = sum + A[row] [col] ;
            }
        }
    }
    printf("\nSum of diagonal elements = %d", sum);

    getch ();
}
