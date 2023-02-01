#include<stdio.h>

struct person
{
    char name [50];
    int age;
    float salary;
};
void display (struct person p)
{
    printf("name : %s\n", p.name);
    printf("age : %d\n", p.age);
    printf("salary : %f\n", p.salary);
}
int main ()
{
    struct person person1;
    strcpy(person1.name, "Hamim");
    person1.age = 22;
    person1.salary = 50000.55;
    display (person1);

    getch ();
}
