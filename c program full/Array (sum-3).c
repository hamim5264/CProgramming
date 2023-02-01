#include<stdio.h>
int main ()
{
   int n,i,sum=0,a[100];
   printf("How many numbers you want to sum: ");
   scanf("%d", &n);
   printf("Now enter your numbers:\n");
   for (i=0; i<n; i++)
   {
       scanf("%d", &a [i]);
   }
   for (i=0; i<n; i++)
   {
       sum = sum + a[ i ];
   }
   printf("Sum = %d\n", sum);
   printf("Average = %f", (float)sum/n);

    getch ();
}
