#include<stdio.h>
int main ()
{
    int first [10] [10], second [10] [10], result [10] [10] ;
    int r1, r2, c1, c2, row, col, k,sum=0;
    printf("Enter rows and column for first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix : ");
    scanf("%d %d", &r2, &c2);


    //order of matrix
    while (c1!=r2)
    {
        printf("Error !! column of first matrix not equal row of second matrix\n");
        printf("Enter rows and column for first matrix : ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix : ");
        scanf("%d %d", &r2, &c2);

    }

    //scanning matrix
    printf("Enter the elements of first matrix :\n");
    for (row=0; row<r1; row++)
    {
        for (col=0; col<c1; col++)
        {
            printf("first martix [%d] [%d] = ", row, col);
            scanf("%d", &first[row] [col] );
        }
        printf("\n");
    }
    printf("\nEnter elements for second matrix :\n");
    for (row=0; row<r2; row++)
    {
        for (col=0; col<c2; col++)
        {
            printf("second matrix [%d] [%d] = ", row, col);
            scanf("%d", &second [row] [col]);
        }
        printf("\n");
    }

    // multiplying matrix
    for (row=0; row<r1; row++)
    {
        for (col=0; col<c2; col++)
        {
            for (k=0; k<c1; k++)
            {
                sum = sum + first[row] [col] * second [row] [col] ;
            }
            result [row] [col] = sum;
            sum = 0;
        }
    }

    //printing matrix
    printf ("first matrix = ");
    for (row=0; row<r1; row++)
    {
        printf("\t");
        for (col=0; col<c1; col++)
        {
            printf("%d ", first[row] [col]);
        }
        printf ("\n");
        printf("\t");
    }

    printf ("\nsecond matrix = ");
    for (row=0; row<r2; row++)
    {
        printf("\t");
        for (col=0; col<c2; col++)
        {
            printf("%d ", second[row] [col]);
        }
        printf("\n");
        printf("\t\t");
    }


    //printing result matrix
    printf ("\nresult matrix = ");
    for (row=0; row<r1; row++)
    {
        printf("\t");
        for (col=0; col<c2; col++)
        {
            printf("%d ", result[row] [col]);
        }
        printf ("\n");
        printf("\t\t");
    }
    getch ();
}
