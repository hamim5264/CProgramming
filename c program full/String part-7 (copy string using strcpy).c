#include<stdio.h>
int main ()
{
    char source [ ] = "Hamim Leon" ;
    char store [20] ;

    strcpy (store, source);
    printf("Source code = %s\n",source );
    printf("Store code = %s",store);
    return 0;
}
