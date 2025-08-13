#include <stdio.h>

int main()
{
    int num, notes;
    int count = 0;
    printf("Enter the Amount : ");
    scanf("%d", &num);

    if (num >= 500)
    {
        notes = num / 500;
        printf("500 x %d \n", notes);
        count = count + notes;
        num = num % 500;
    }
    if (num >= 200)
    {
        notes = num / 200;
        printf("200 x %d \n", notes);
        count = count + notes;
        num = num % 200;
    }
    if (num >= 100)
    {
        notes = num / 100;
        printf("100 x %d \n", notes);
        count = count + notes;
        num = num % 100;
    }
    if (num >= 50)
    {
        notes = num / 50;
        printf("50 x %d \n", notes);
        count = count + notes;
        num = num % 50;
    }
    if (num >= 20)
    {
        notes = num / 20;
        printf("20 x %d \n", notes);
        count = count + notes;
        num = num % 20;
    }
    if (num >= 10)
    {
        notes = num / 10;
        printf("10 x %d \n", notes);
        count = count + notes;
        num = num % 10;
    }
    if (num >= 5)
    {
        notes = num / 5;
        printf("5 x %d \n", notes);
        count = count + notes;
        num = num % 5;
    }
    printf("Remaining amount = %d\n", num);

    return 0;
}
