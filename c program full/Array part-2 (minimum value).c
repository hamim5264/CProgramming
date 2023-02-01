#include<stdio.h>
int main ()
{
    int n,i,num[100];
    printf("How many numbers you want to input: ");
    scanf("%d", &n);
    printf("Now enter your numbers:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    int min = num[0];
    for (i=1; i<n; i++)
    {
        if (min>num[i])
            min = num [i];
    }
    printf("Minimum value is: %d", min);

    getch ();
}
