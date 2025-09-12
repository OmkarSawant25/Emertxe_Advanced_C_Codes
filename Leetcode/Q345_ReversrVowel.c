#include <stdio.h>
#include <string.h>

// Prototype
int isVowel(char a)
{
    if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        return 1;
    }
    return 0;
}

char *reverseVowels(char *s)
{
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j)
    {
        if(!isVowel(s[i]))
        {
            i++;
        }
        if(!isVowel(s[j]))
        {
            j--;
        }
        if (isVowel(s[i]) && isVowel(s[j]))
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    return s;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Original: %s\n", str);
    printf("Reversed vowels: %s\n", reverseVowels(str));

    return 0;
}
/*
char* reverseVowels(char* s) {
    int j = strlen(s)-1;
    int i = 0;
    while(i<j){
        while(i<j && strchr("aeiouAEIOU",s[i])== NULL ) i++;
        while(i<j && strchr("aeiouAEIOU",s[j])== NULL ) j--;
 
            if(i<j){
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
                i++;
                j--;
            }
           

        }
        return s;
    }    
*/