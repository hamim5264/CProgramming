#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1>n2 && n1>n3)
        printf("Large number is: %d\n", n1);

    else if (n2>n1 && n2>n3)
        printf("Large number is: %d\n", n2);

    else if (n3>n1 && n3>n2)
        printf("Large number is: %d", n3);

    else
        printf("Numbers are equal");

    getch ();
}
