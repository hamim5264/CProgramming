/*
when we use double statement in our program then we have to
attach our every statement in second bracket { }
*/
#include<stdio.h>
int main()
{
    int time=10;
    if (time==10)
       {
            printf("Good Morning!\n"); //double statement
            printf("Hamim\n");
       }
       else
       {
           printf("Sorry it's not morning!\n");
           printf("Hamim");
       }
getch();
}
