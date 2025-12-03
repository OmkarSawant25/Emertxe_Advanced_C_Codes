#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isIsomorphic(char *s, char *t);

int main()
{
    char s[100], t[100];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (isIsomorphic(s, t))
        printf("The strings '%s' and '%s' are isomorphic.\n", s, t);
    else
        printf("The strings '%s' and '%s' are NOT isomorphic.\n", s, t);

    return 0;
}
bool isIsomorphic(char *s, char *t)
{
    int i = 0;
    int mapS[256];
    int mapT[256];

    for (int i = 0; i < 256; i++)
    {
        mapS[i] = -1;
        mapT[i] = -1;
    }
    while (s[i] != '\0')
    {
        unsigned char a = s[i];
        unsigned char b = t[i];

        if (mapS[a] != -1 && mapS[a] != b)
            return false;
        if (mapT[b] != -1 && mapT[b] != a)
            return false;

        mapS[a] = b;
        mapT[b] = a;
        i++;
    }
    return true;
}