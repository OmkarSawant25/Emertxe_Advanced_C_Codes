#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    int leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 1 : 0;
    if(leap == 1) printf("Leap year\n");
    else printf("Not a leap year\n");
    
    return 0;
}