//area = 3.1416 * r * r

#include<stdio.h>
int main ()
{
    float radius, area ;
    printf("Enter the value of radius: \n");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;
    printf("Area of circle: %f", area);

    getch( );
}
