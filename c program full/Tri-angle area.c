#include<stdio.h>
int main()
{
    float base, height, area ;
    printf("Enter the base: \n");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);
    area = (float)1/2 * base * height ; //type casting
    printf("area = %.2f", area);

    getch ( );
}
