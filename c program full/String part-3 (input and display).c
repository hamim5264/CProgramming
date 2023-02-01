/*
scanf() function can't work when we input any space
that's why we have to use gets(); function for input
*/

#include<stdio.h>
int main ()
{
    char s1 [30];
    printf("Enter you full name here : ");
    gets (s1);
    printf("\nYour name : %s", s1);

    return 0;
}
