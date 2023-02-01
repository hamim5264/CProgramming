#include<stdio.h>
int main ()
{
    int A[10] [10], transpose[10] [10];
    int i, j, row, col;

    //scanning matrix
    printf("Enter row and column for A matrix : ");
    scanf("%d %d", &row, &col);

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("\nA [%d] [%d]) = ", i, j);
            scanf("%d", &A[i] [j]);
        }
        printf("\n");
    }

    //transposing matrix
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            transpose [j] [i] = A [i] [j] ;
        }
    }

    //printing the matrix
    printf("\A = ");
    for (i=0; i<row; i++)
    {
        printf("\t");
        for (j=0; j<col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // printing transpose matrix
    printf("\nTranspose matrix = ");
    for (i=0; i<col; i++)
    {
        printf("\t");
        for (j=0; j<row; j++)
        {
            printf("%d ", transpose [i] [j] );
        }
        printf("\n");
        printf("\t\t");
    }
    getch ();

}
