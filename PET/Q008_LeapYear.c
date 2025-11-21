// WAP  to print leap year or not 

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    (year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0) ? printf("Leap Year") : printf("Not a Leap Year");
    return 0;
}