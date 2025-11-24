#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *addBinary(char *a, char *b)
{
    int al = strlen(a);
    int bl = strlen(b);
    int suma = 0;
    for (int i = 0; i < al; i++)
    {
        suma = suma * 2 + (a[i] - '0');
    }
    int sumb = 0;
    for (int i = 0; i < bl; i++)
    {
        sumb = sumb * 2 + (b[i] - '0');
    }
    int c = suma + sumb;

    int maxLen = (al > bl ? al : bl) + 3;
    char *str = malloc(maxLen * sizeof(char));

    int i = 0;
    if (c == 0)
    {
        str[i++] = '0';
    }
    else
    {
        while (c > 0)
        {
            str[i++] = c % 2 + '0';
            c = c / 2;
        }
    }

    str[i] = '\0';
    int s = 0;
    int e = i - 1;
    while (s < e)
    {
        char temp = str[e];
        str[e] = str[s];
        str[s] = temp;
        s++;
        e--;
    }
    printf("%s\n", str);
    return str;
}

int main()
{
    char a[100], b[100];

    printf("Enter first binary number: ");
    scanf("%s", a);

    printf("Enter second binary number: ");
    scanf("%s", b);

    char *result = addBinary(a, b);

    printf("Sum of binary numbers: %s\n", result);

    return 0;
}
