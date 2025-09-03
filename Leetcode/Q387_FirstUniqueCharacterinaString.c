// Not got submitted due to Time Limit Exceeded

#include <stdio.h>

int firstUniqChar(char *s)
{
    int count = 0;
    int i = 0;
    while (s[i] != 0)
    {
        int j = 0;
        count = 0;
        while (s[j] != 0)
        {
            if (s[i] == s[j])
            {
                count++;
            }
            j++;
        }
        if (count == 1)
            return i;
        i++;
    }
    return -1;
}

int main()
{
    char s[] = "eeetcode";

    int index = firstUniqChar(s);
    if (index != -1)
        printf("First unique character is at index: %d\n", index);
    else
        printf("No unique character found.\n");

    return 0;
}
