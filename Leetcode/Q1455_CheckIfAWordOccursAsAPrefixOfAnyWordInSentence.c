#include <stdio.h>

// Function prototype
int isPrefixOfWord(char *sentence, char *searchWord);

int main()
{
    char sentence[] = "i love eating burger";
    char searchWord[] = "burg";

    int result = isPrefixOfWord(sentence, searchWord);
    printf("Result: %d\n", result);

    return 0;
}

int isPrefixOfWord(char *sentence, char *searchWord)
{
    int i = 0, word = 1;
    while(sentence[i] != '\0')
    {
        int j = 0;
        while(sentence[i+j] == searchWord[j] && searchWord[j] != '\0' && sentence[i+j] != '\0')
        {
            j++;
        }
        if(searchWord[j] == '\0')
        {
            return word;
        }
        while(sentence[i] != '\0' && sentence[i] != ' ') i++;
        if(sentence[i] == ' ')
        {
            i++;
            word++;
        }
        
    }
    return -1;
}
