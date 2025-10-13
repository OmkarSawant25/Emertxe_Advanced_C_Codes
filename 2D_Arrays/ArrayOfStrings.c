#include <stdio.h>

int main()
{
    char *days[] = {"Mon", "Tue", "Wed", "Thu", "Fri"};

    for (int i = 0; i < 5; i++)
        printf("%s ", days[i]);

    return 0;
}
