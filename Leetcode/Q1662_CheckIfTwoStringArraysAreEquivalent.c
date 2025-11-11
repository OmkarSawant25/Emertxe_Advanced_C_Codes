#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char a[10000] = "";
    char b[10000] = "";

    for (int i = 0; i < word1Size; i++)
        strcat(a, word1[i]);

    for (int i = 0; i < word2Size; i++)
        strcat(b, word2[i]);

    return strcmp(a, b) == 0;
}

int main() {
    char *word1[] = {"ab", "c"};
    char *word2[] = {"a", "bc"};

    int word1Size = sizeof(word1) / sizeof(word1[0]);
    int word2Size = sizeof(word2) / sizeof(word2[0]);

    if (arrayStringsAreEqual(word1, word1Size, word2, word2Size))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
