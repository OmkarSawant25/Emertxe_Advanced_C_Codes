#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
char *reversePrefix(char *word, char ch);

int main()
{
    char word[] = "abcdefd"; // Input string
    char ch = 'd';           // Character to reverse up to

    // Call the function
    char *result = reversePrefix(word, ch);

    // Print the result
    printf("Original word: %s\n", word);
    printf("Modified word: %s\n", result);

    // Free allocated memory
    free(result);

    return 0;
}

// Function definition
char *reversePrefix(char *word, char ch)
{
    int i = 0, pos = -1;
    int n = strlen(word);
    char *new = malloc((n + 1) * sizeof(char));
    strcpy(new, word);
    while(new[i] != '\0')
    {
        if(new[i] == ch)
        {
            pos = i;
            break;
        }
        i++;
    }
    if(pos != -1)
    {
        int s = 0, e = pos;
        while(s < e)
        {
            char t = new[s];
            new[s] = new[e];
            new[e] = t;
            s++;
            e--;
        }
        return new;
    }
    return word;
}
