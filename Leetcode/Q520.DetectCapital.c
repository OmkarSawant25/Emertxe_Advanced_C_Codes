#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool detectCapitalUse(char *word)
{
    int lower = 0, upper = 0, len = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (islower(word[i]))
            lower++;
        else
            upper++;
        len++;
    }

    if (upper == len || lower == len)
        return true;
    if (isupper(word[0]) && lower == len - 1)
        return true;

    return false;
}

int main()
{
    char word1[] = "USA";
    char word2[] = "leetcode";
    char word3[] = "Google";
    char word4[] = "FlaG";

    printf("%s → %s\n", word1, detectCapitalUse(word1) ? "true" : "false");
    printf("%s → %s\n", word2, detectCapitalUse(word2) ? "true" : "false");
    printf("%s → %s\n", word3, detectCapitalUse(word3) ? "true" : "false");
    printf("%s → %s\n", word4, detectCapitalUse(word4) ? "true" : "false");

    return 0;
}
