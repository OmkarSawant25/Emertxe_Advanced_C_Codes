#include <stdio.h>
#include <string.h>

char *removeTrailingZeros(char *num)
{
    int len = strlen(num);
    int i = len - 1;

    while (i >= 0 && num[i] == '0')
    {
        i--;
    }

    num[i + 1] = '\0';
    return num;
}

int main()
{
    char num[100];

    printf("Enter a number: ");
    scanf("%s", num); // read as string

    removeTrailingZeros(num);

    printf("Output: %s\n", num);

    return 0;
}
