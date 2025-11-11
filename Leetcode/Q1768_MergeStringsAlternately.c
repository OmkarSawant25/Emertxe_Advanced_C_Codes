#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mergeAlternately(char *word1, char *word2)
{
    char *ans = (char *)malloc(sizeof(char) * 201);
    int i = 0;
    while (*word2 != '\0' || *word1 != '\0')
    {
        if (*word1 != '\0')
        {
            ans[i++] = *word1;
            word1++;
        }
        if (*word2 != '\0')
        {
            ans[i++] = *word2;
            word2++;
        }
    }
    ans[i] = '\0';
    return ans;
}

int main()
{
    char word1[] = "abc";
    char word2[] = "pqr";

    char *result = mergeAlternately(word1, word2);

    printf("Merged string: %s\n", result);

    free(result); // Free allocated memory
    return 0;
}
