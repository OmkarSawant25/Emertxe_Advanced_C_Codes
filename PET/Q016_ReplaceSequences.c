#include <stdio.h>
#include <string.h>

void replaceSequences(char *s);

int main()
{
    char s[] = "abdbbcbhi";

    replaceSequences(s);

    printf("%s\n", s);
    return 0;
}

void replaceSequences(char *s)
{
    int len = strlen(s);
    char res[len + 1];  

    int i = 0, j = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 'b' && s[i+1] == 'b' && s[i+2] == 'c')
        {
            res[j++] = '$';
            i += 3;
        }
        else if (s[i] == 'b' && s[i+1] == 'b' && s[i+2] == 'e')
        {
            res[j++] = '&';
            i += 3;
        }
        else if (s[i] == 'b' && s[i+1] == 'b')
        {
            res[j++] = '*';
            i += 2;
        }
        else
        {
            res[j++] = s[i++];
        }
    }

    res[j] = '\0';

    strcpy(s, res);
}

//  • bbc → $
//  • bbe → &
//  • bb →*
