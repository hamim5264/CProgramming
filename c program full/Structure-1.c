#include<stdio.h>

//global structure

struct person
{
    int age;
    float salary;
};
int main ()
{
    struct person person1, person2;

    person1.age = 21;
    person1.salary = 25550.50;

    printf("Person1 :\n");
    printf("Age : %d\n", person1.age);
    printf("Salary : %f", person1.salary);


    person2.age = 25;
    person2.salary = 22550.50;

    printf("\n\nPerson2 :\n");
    printf("Age : %d\n", person2.age);
    printf("Salary : %f", person2.salary);

    getch ();
}
