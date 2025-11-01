#include <stdio.h>
#include <stdlib.h>

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize);

int main() {
    char* words[] = {"apple", "banana", "cherry", "date"};
    int wordsSize = 4;
    char x = 'a';
    int returnSize;
    
    int* result = findWordsContaining(words, wordsSize, x, &returnSize);
    
    // Print the result indices
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    
    free(result);
    return 0;
}

// int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize)
// {
//     int *ans = (int *)malloc(sizeof(int) * wordsSize);
//     int count = 0;
//     for(int i = 0; i < wordsSize; i++)
//     {
//         for(int j = 0; words[i][j] != '\0'; j++)
//         {
//             if(words[i][j] == x)
//             {
//                 ans[count++] = i;
//                 break;
//             }
//         }
//     }
//     *returnSize = count;
//     return ans;
// }
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize)
{
    int *ans = malloc(wordsSize * sizeof(int));
    int count = 0;

    for (int i = 0; i < wordsSize; i++)
    {
        if (strchr(words[i], x) != NULL)
        {
            ans[count++] = i;
        }
    }

    *returnSize = count;
    return ans;
}