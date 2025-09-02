#include <stdio.h>
#include <string.h>

char *my_strtok(char str[], const char delim[]);
int length(char *a);

int main()
{
    char str[50], delim[50];

    printf("Enter the string  : ");
    scanf("%s", str);

    printf("Enter the delimeter : ");
    scanf("\n%s", delim);

    char *token = my_strtok(str, delim);
    printf("Tokens :\n");

    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}

char *my_strtok(char str[], const char delim[])
{
    // int al = length(str);
    // int bl = length(delim);

    int i = 0;
    static char *start;
    if (str != NULL)
    {
        start = str;
    }
    if (start == NULL)
    {
        return NULL;
    }
    str = start;
    while (str[i] != 0)
    {
        int j = 0;
        while (delim[j] != 0)
        {
            if (str[i] == delim[j])
            {
                str[i] = 0;
                start = &str[i + 1];
                return str;
            }
            j++;
        }
        i++;
    }
    start = NULL;
    return str;
}
int length(char *a)
{
    int len = 0;
    while (*a != 0)
    {
        len++;
    }
    return len;
}
