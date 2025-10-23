#include <stdio.h>

int countBinarySubstrings(char *s);

int main()
{
    char s[] = "00110011";
    printf("%d\n", countBinarySubstrings(s));
    return 0;
}

// int countBinarySubstrings(char *s)
// {
//     int count = 0;
//     int i = 1;
//     while (s[i] != '\0')
//     {
//         if ((s[i] != s[i - 1]))
//         {
//             count++;
//         }
//         else if (s[i + 2] != '\0' && s[i] == s[i - 1] && s[i + 1] == s[i + 2] && s[i] != s[i + 1])
//             count++;
//         i++;
//     }
//     return count;
// }

int countBinarySubstrings(char *s)
{
    int prev = 0, curr = 1, count = 0;
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (s[i] == s[i - 1])
        {
            curr++;
        }
        else
        {
            count += (prev < curr) ? prev : curr;
            prev = curr;
            curr = 1;
        }
    }
    count += (prev < curr) ? prev : curr;
    return count;
}
