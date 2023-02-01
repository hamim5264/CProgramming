#include<stdio.h>
int main ()
{
    char string1[ 20] = "Andul Hamim";
    char string2[ 20] = "Leon";
    int i=0, len=0, j=0;
    while (string1[i] != '\0')
    {
        i++;
        len++;
    }
    while (string2[j] != '\0')
    {
        string1[len+j] = string2[i];
        j++;
    }
    printf("String1 = %s", string1);
}
