/* WAP to calculate length of the string */
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
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    printf("String length is %d\n", length(str));
}