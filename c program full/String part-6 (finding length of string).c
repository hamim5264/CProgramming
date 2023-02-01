#include<stdio.h>
int main ()
{
    char s1 [ ] = "Abdul Hamim" ;
    int i=0, len=0;
    while (s1[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length of string = %d", len);
    getch ();
}
