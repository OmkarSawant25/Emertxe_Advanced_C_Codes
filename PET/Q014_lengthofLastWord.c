#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s);   // Function prototype

int main()
{
    char s[256];

    scanf(" %[^\n]", s);   // Read full line including spaces

    printf("Length of the last word: %d\n", lengthOfLastWord(s));

    return 0;
}
int lengthOfLastWord(char *s)
{
    int len = strlen(s) - 1;
    int count = 0;

    while (len >= 0 && s[len] == ' ')
        len--;

    while (len >= 0 && s[len] != ' ')
    {
        count++;
        len--;
    }

    return count;
}
