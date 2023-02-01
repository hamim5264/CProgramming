#include<stdio.h>
int main ()
{
    char str1 [ ] = "Abdul Hamim";
    char str2 [ ] = "Hamim";
    int d = strcmp (str1, str2);
    if (d==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    getch ();
}
