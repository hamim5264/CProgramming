#include<stdio.h>
int main ()
{
    char str1[15] = "Bangladesh";
    char str2[15] = "India";
    char temp[15] ;

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("Str1 = %s", str1);
    printf("\nStr2 = %s", str2);

    getch ();
}
