#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    int freq[128] = {0};
    while (*s != '\0')
    {
        freq[*s]++;
        s++;
    }
    while (*t != '\0')
    {
        freq[*t]--;
        t++;
    }
    for (int i = 0; i < 128; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    char s[100], t[100];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (isAnagram(s, t))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
