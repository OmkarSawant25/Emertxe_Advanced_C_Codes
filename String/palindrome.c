// ● WAP to check a given string is palindrome or not
#include <stdio.h>
int length(char *s);
int palindrome(char *a);

int main()
{
    char *str1;
    printf("Enter the string : ");
    scanf("%s", str1);

    int res = palindrome(str1);
    if (res == 1)
    {
        printf("String is a palindrome\n");
    }
    else
    {
        printf("String is not a palindrome\n");
    }
    return 0;
}
int length(char *s)
{
    int len = 0;
    while (*s != 0)
    {
        len++;
        s++;
    }
    return len;
}
int palindrome(char *a)
{
    int len = length(a);
    for (int i = 0; i < len / 2; i++)
    {
        if (a[i] != a[len - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}