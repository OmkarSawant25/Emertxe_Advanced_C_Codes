/*
WAP to Find average of command line args
Eg : ./a.out 1 5 7
o/p: Average: 6.5
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2) // if no numbers given
    {
        printf("Usage: %s num1 num2 ...\n", argv[0]);
        return 1; // exit early
    }

    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }

    float avg = (float)sum / (argc - 1);
    printf("Average: %.2f\n", avg);

    return 0;
}
