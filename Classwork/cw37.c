/*WAP to compare string2 with string1 up to n characters*/
#include <stdio.h>
int my_strncmp(char *str1, char *str2, int n)
{
    // int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0;
        }
        // if (str1[i] == '\0')
        // {
        //     return -1;
        // }
        // if (str2[i] == '\0')
        // {
        //     return 1;
        // }
        if (str1[i] != str2[i])
        {
            int diff = str1[i] - str2[i];
            return diff;
        }
    }
    return 0;
}

int main()
{
    char str1[25];
    char str2[25];
    int n;
    printf("Enter the string1 : ");
    scanf("%s", str1);
    printf("Enter the string2 : ");
    scanf("%s", str2);
    printf("Enter the n : ");
    scanf("%d", &n);
    int result = my_strncmp(str1, str2, n);
    printf("%d \n", result);
    if (result == 0)
    {
        printf("str1 is equal to str2\n");
    }
    else if (result < 0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str2 is less than str1\n");
    }
}