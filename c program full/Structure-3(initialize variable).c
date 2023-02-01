#include<stdio.h>

struct person
{
    char name [50];
    int age;
    float salary
};
int main ()
{
    struct person person1={"Hamim", 20, 50542.54}, person2 ={"Leon", 25, 464243.554} ;

    printf("Name : %s", person1.name);
    printf("\nAge : %d", person1.age);
    printf("\nSalary : %f", person1.salary);

    printf("\n\nName : %s", person2.name);
    printf("\nAge : %d", person2.age);
    printf("\nSalary : %f", person2.salary);

    getch ();
}
