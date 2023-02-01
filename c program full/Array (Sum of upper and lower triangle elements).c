#include<stdio.h>
int main ()
{
    int A[3] [3], uppersum=0, lowersum=0, row, col;
    printf("Enter the elements of matrix A:\n");
    for (row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("A [%d] [%d] = ", row, col);
            scanf("%d", &A[row] [col] );
        }
        printf("\n");
    }

    printf("\A = ");
    for (row=0; row<3; row++)
    {
        printf("\t");
        for (col=0; col<3; col++)
        {
            printf("%d ", A[row] [col]);
        }
        printf("\n");
    }

    //sum of upper and lower triangle
    for (row=0; row<3; row++)
    {
        for (col=0; col<3; col++)
        {
            if (row<col)
            {
                uppersum = uppersum + A [row] [col] ;
            }
            if (row>col)
            {
                lowersum = lowersum + A [row] [col] ;
            }
        }
    }
    printf("\nSum of upper tri angle elements : %d\n",uppersum );
    printf("Sum of lower tri angle elements : %d", lowersum);

    getch ();
}
