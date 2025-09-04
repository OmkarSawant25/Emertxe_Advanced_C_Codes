// Not got submitted due to Time Limit Exceeded

#include <stdio.h>

int firstUniqChar(char *s)
{
    int size = -1;
    int i = 0;
    while (s[i] != 0)
    {
        int j = 0;
        int count = 0;
        while (s[j] != 0)
        {
            if (j < i)
            {
                if(s[i] == s[j]) break;
            }
            else
            {
                if (s[i] == s[j])
                {
                    count++;
                }
            }
            j++;
        }
        if (count == 1)
        {
            size = i;
            break;
        }
        i++;
    }
    return size;
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
