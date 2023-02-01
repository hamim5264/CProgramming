#include<stdio.h>

struct person
{
    char name [50];
    int age;
    float salary
};
int main ()
{
    struct person person1={"Hamim", 20, 20550}, person2 ={"Leon", 20, 20550} ;

    printf("Name : %s", person1.name);
    printf("\nAge : %d", person1.age);
    printf("\nSalary : %f", person1.salary);

    printf("\n\nName : %s", person2.name);
    printf("\nAge : %d", person2.age);
    printf("\nSalary : %f", person2.salary);

    //comparison
    if (person1.age==person2.age && person1.salary==person2.salary)
        printf("\n\nPerson1 equal to Person2");
    else
        printf("\n\nPerson1 not equal to Person2");

    getch ();
}
