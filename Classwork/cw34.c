/*
Description :
You have to read two strings from user and compare the strings equal or not without using strcmp() function.
*/

#include <stdio.h>
int strcmp(char *a, char *b)
{
    int res = 0;
    while (*a != '\0' || *b != '\0')
    {
        if (*a != *b)
        {
            res = *a - *b;
            break;
        }
        a++;
        b++;
    }
    return res;
}
int main()
{
    char str1[100];
    // printf("Enter the string1 : ");
    scanf("%[^\n]", str1);
    getchar();
    char str2[100];
    // printf("Enter the string2 : ");
    scanf("%[^\n]", str2);
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Entered Strings are equal\n");
    }
    else
    {
        printf("Entered Strings are not equal\n");
    }
    return 0;
}