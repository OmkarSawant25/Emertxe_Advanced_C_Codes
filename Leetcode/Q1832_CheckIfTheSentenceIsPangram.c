#include <stdio.h>
#include <stdbool.h>

bool checkIfPangram(char *sentence)
{
    bool ans[26] = {false};
    int i = 0;
    while (sentence[i] != '\0')
    {
        ans[sentence[i] - 'a'] = true;
        i++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (ans[j] == false)
            return false;
    }
    return true;
}

int main()
{
    char sentence1[] = "thequickbrownfoxjumpsoverthelazydog";
    char sentence2[] = "leetcode";

    if (checkIfPangram(sentence1))
        printf("\"%s\" → Pangram ✅\n", sentence1);
    else
        printf("\"%s\" → Not Pangram ❌\n", sentence1);

    if (checkIfPangram(sentence2))
        printf("\"%s\" → Pangram ✅\n", sentence2);
    else
        printf("\"%s\" → Not Pangram ❌\n", sentence2);

    return 0;
}
