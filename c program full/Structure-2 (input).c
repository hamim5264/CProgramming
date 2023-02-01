#include<stdio.h>
struct person
{
    char name [50];
    int age;
    float salary;
};
int main ()
{
    struct person person1, person2;

    printf("Information for person1 :\n");

    printf("Enter your name : ");
    gets (person1.name);

    printf("Enter your age : ");
    scanf("%d", &person1.age);

    printf("Enter your salary : ");
    scanf("%f", &person1.salary);

    printf("\n\nName : %s\n", person1.name );
    printf("Age : %d\n", person1.age);
    printf("Salary : %f", person1.salary);

    printf("\n\nInformation for person2 :\n");

    printf("Enter your name : ");
    scanf("%s", person2.name);

    printf("Enter your age : ");
    scanf("%d", &person2.age);

    printf("Enter your salary : ");
    scanf("%f", &person2.salary);

    printf("\n\nName : %s\n", person2.name );
    printf("Age : %d\n", person2.age);
    printf("Salary : %f", person2.salary);

    getch ();
}
