#include<stdio.h>
enum days_of_week
{
    sat, sun, mon, tue, wed, thu, fri
};
int main ()
{
    enum days_of_week day1, day2;
    day1 = sun;
    day2 = thu;
    int dif = day2 - day1;
    printf("day difference = %d\n", dif);

    getch ();
}
