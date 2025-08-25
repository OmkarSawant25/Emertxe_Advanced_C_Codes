#include <stdio.h>
int length(char *str)
{
    int len = 0;
    while (*str != 0)
    {
        len++;
        str++;
    }
    return len;
}

void strrev(char *str, int i, int j)
{
    char temp;
    if (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        // i++;
        // j--;
        strrev(str, ++i, --j);
        // strrev(str, i + 1, j - 1);
    }
    return;
}

int main()
{
    char str1[20], i = 0;
    scanf("%s", str1);
    printf("Entered : %s\n", str1);
    int len = length(str1);
    strrev(str1, i, len - 1);
    printf("%s ", str1);
}