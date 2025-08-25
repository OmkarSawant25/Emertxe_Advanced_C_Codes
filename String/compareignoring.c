#include <stdio.h>
int compare(char *a, char *b)
{
    while (*a != '\0' && *b != '\0')
    {
        // if (*a == *b + 32 || *a == *b - 32 || *b == *a + 32 || *b == *a - 32 || *a == *b)
        if(!(*a == *b || *a - *b == 32 || *b - *a == 32))
        {
            return 0;
        }
        a++;
        b++;
    }
    if (*a == '\0' && *b == '\0')
        return 1;
    else
        return 0;
}
int main()
{
    // char *str1;
    // char *str2;
    // printf("Enter str1 : ");
    // scanf("%s", str1);
    // printf("Enter str2 : ");
    // scanf("%s", str2);

    char str1[20];
    char str2[20];
    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);

    int res = compare(str1, str2);
    if (res == 1)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
    return 0;
}
