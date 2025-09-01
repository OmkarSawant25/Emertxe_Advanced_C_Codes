#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s)
{
    int n = strlen(s) - 1;
    int len = 0;
    while (n > 0 && s[n] == ' ')
    {
        n--;
    }
    while (n >= 0 && s[n] != ' ')
    {
        len++;
        n--;
    }
    return len;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int len = lengthOfLastWord(str);
    printf("Length of last word = %d\n", len);

    return 0;
}
