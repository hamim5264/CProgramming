#include<stdio.h>
int main()
{
    int a=1;
    print:
        printf("%d\t",a);
        a++;
        if (a<=10)
        goto print;  //label calling
        return 0;
}
