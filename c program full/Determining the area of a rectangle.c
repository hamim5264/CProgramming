//area = length * wide
#include<stdio.h>
int main()
{
    float length, wide, area ;
    printf("Enter length and wide of rectangle: \n");
    scanf("%f %f", &length, &wide);

    area = length * wide ;
    printf("Area of rectangle: %f", area);

    return 0;
}
