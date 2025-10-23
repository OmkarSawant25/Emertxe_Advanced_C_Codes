#include <stdio.h>
#include <stdlib.h>

char *convertToTitle(int columnNumber);

int main()
{
    int columnNumber;
    scanf("%d", &columnNumber);
    char *result = convertToTitle(columnNumber);
    printf("%s\n", result);
    return 0;
}

char *convertToTitle(int columnNumber)
{
    int x;
    int i = 0;
    char *res = malloc(sizeof(char) * 20);

    while (columnNumber > 0)
    {
        columnNumber--;
        res[i++] = 'A' + (columnNumber % 26);
        columnNumber = columnNumber / 26;
    }
    for (int j = 0; j < i / 2; j++)
    {
        char temp = res[j];
        res[j] = res[i - j - 1];
        res[i - j - 1] = temp;
    }
    res[i] = '\0';
    return res;
}
