/* You have read a string from user and reverse the string. */
#include <stdio.h>
void reverse(char *str);
int length(char *str);
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    reverse(str);
    printf("Reversed string is %s\n", str);
}
void reverse(char *str)
{
    int n = length(str);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return;
}
int length(char *str)
{
    int n = 0;
    while (*str != 0)
    {
        n++;
        str++;
    }
    return n;
}