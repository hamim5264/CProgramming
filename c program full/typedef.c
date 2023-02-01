#include<stdio.h>
int main ()
{
    typedef char letter;
    letter ch;
    ch = 'A';
    printf("CH = %c\n",ch);

    letter ch1;
    ch1 = 'B';
    printf("CH = %c\n", ch1);

    getch ();
}
