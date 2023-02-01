#include<stdio.h>
int main()
{
    double a,b;
    char op;
    printf("Choice an operator: \n+\n-\n*\n/\n");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);
    switch (op)
    {
    case '+':
        {
            printf("%lf + %lf = %lf", a,b,a+b);
            break;
        }
    case '-' :
        {
                        printf("%lf - %lf = %lf", a,b,a-b);
            break;
        }
    case '*' :
        {
                        printf("%lf * %lf = %lf", a,b,a*b);
            break;
        }
    case '/':
        {
                        printf("%lf / %lf = %lf", a,b,a/b);
            break;
        }
    default :
        printf("Not a valid operator");
    }
    getch ();
}
