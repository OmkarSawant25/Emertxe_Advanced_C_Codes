#include <stdio.h>
#include <string.h>

char *reverseStr(char *s, int k);

int main()
{
    char s[100];
    int k;
    scanf("%s %d", s, &k);
    printf("%s\n", reverseStr(s, k));
    return 0;
}

char *reverseStr(char *s, int k)
{
    int len = strlen(s);
    for (int i = 0; i < len; i += 2 * k)
    {
        int left = i;
        int right = (i + k - 1 < len) ? (i + k - 1) : (len - 1);
        while (left < right)
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
    return s;
}
