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

void concat(char *a, char *b)
{
    int size = length(a);
    while (*b != '\0')
    {
        a[size++] = *b;
        b++;
    }
    a[size] = '\0';
    return;
}

int main()
{
    char str1[20];
    char str2[20];
    printf("Enter Str1 : %s", str1);
    scanf("%s", str1);
    printf("Enter Str2 : %s", str2);
    scanf("%s", str2);

    // printf("Str1 : %s\n", str1);
    // printf("Str2 : %s\n", str2);

    concat(str1, str2);
    printf("Str1 : %s\n", str1);
    // printf("Str2 : %s\n", str2);
}