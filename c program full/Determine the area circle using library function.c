#include<stdio.h>
#include<math.h>
int main()
{
    float radius, area;
    printf("Enter the value of radius: \n");
    scanf("%f", &radius);
    area = M_PI * radius * radius;
    printf("The area of circle is: %f", area);

    return 0 ;
}
