#include <stdio.h>
#include <string.h>
#include <ctype.h>

int maxFreqSum(char *s); // function prototype

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // use " %[^\n]" if spaces are allowed

    int result = maxFreqSum(str);

    printf("Output = %d\n", result);

    return 0;
}

int maxFreqSum(char *s)
{
    int freq[256] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        if (isalpha(ch))
            freq[ch]++;
    }

    int maxVowel = 0, maxConsonant = 0;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (freq[i] > 0)
        {
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
            {
                if (freq[i] > maxVowel)
                    maxVowel = freq[i];
            }
            else
            {
                if (freq[i] > maxConsonant)
                    maxConsonant = freq[i];
            }
        }
    }

    return maxVowel + maxConsonant;
}
