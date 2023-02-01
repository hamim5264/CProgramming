#include<stdio.h>
int main()
{
    int x;
    for (x=1; x<20; x++)
        {

        if (x%3==0)
            continue;
            printf("%d\n",x);

            if (x==10)
                break;
        }

    getch ();


}
