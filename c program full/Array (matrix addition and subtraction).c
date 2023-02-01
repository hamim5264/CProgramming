#include<stdio.h>
int main ()
{
    int row, col, nrows, ncols;
    int A[10] [10], B[10] [10], C[10] [10], D[10] [10];

    printf("Enter the number of rows and cols of matrix: ");
    scanf("%d %d", &nrows, &ncols );

    //scanning matrix
    printf("Enter the elements of A matrix :\n");
    for (row=0; row<nrows; row++)
    {
        for (col=0; col<ncols; col++)
        {
            printf("A [%d] [%d] = ", row, col);
            scanf("%d", &A[row] [col] );
        }
        printf("\n");
    }
    printf("Enter the elements of B matrix:\n");
    for (row=0; row<nrows; row++)
    {
        for(col=0; col<ncols; col++)
        {
            printf("B [%d] [%d] = ", row, col);
            scanf("%d", &B[row] [col] );
        }
        printf("\n");
    }

    //printing matrix
    printf("A = ");
    for (row=0; row<nrows; row++)
    {
        printf("\t");
        for (col=0; col<ncols; col++)
        {
            printf("%d ", A[row] [col] );
        }
        printf("\n");
    }

    printf("\nB = ");
    for (row=0; row<nrows; row++)
    {
        printf("\t");
        for (col=0; col<ncols; col++)
        {
            printf("%d ", B[row] [col] );
        }
        printf("\n");
    }

    //adding matrix

    for (row=0; row<nrows; row++)
    {
        for (col=0; col<ncols; col++)
        {
            C [row] [col] = A [row] [col] + B [row] [col] ;
        }
    }

    //printing sum matrix

    printf("\nA + B = ");
    for (row=0; row<nrows; row++)
    {

        for (col=0; col<ncols; col++)
        {
            printf("%d ", C[row] [col] );
        }
        printf("\n");
        printf("\t");
    }

    //subtract matrix

    for (row=0; row<nrows; row++)
    {
        for (col=0; col<ncols; col++)
        {
            D[row] [col] = A[row] [col] - B[row] [col];
        }
    }

//printing matrix

    printf("\nA - B = ");
    for (row=0; row<nrows; row++)
    {
        for (col=0; col<ncols; col++)
        {
            printf("%d ", D[row][col]);
        }
        printf("\n");
        printf("\t");
    }
    getch ();
}

