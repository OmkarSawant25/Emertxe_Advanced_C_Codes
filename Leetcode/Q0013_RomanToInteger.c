#include <stdio.h>

// Function prototype
int romanToInt(char *s);

int main()
{
    char roman[20];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    int result = romanToInt(roman);
    printf("Integer value: %d\n", result);

    return 0;
}

int romanToInt(char *s)
{
    int result = 0;
    int index = 0;

    while (s[index] != '\0')
    {
        if (s[index] == 'I')
        {
            if(s[index + 1] == 'V')
            {
                result += 4;
                index = index + 2;
                continue;
            }
            if(s[index + 1] == 'X')
            {
                result += 9;
                index = index + 2;
                continue;
            }
            if(s[index + 1] == 'I')
            {
                if(s[index + 2] == 'I')
                {
                    result += 3;
                    index = index + 3;
                    continue;
                }
                result += 2;
                index = index + 2;
                continue;
            }
            result += 1;
            index = index + 1;
        }
        else if(s[index] == 'V')
        {
            result += 5;
            index = index + 1;
        }
        else if(s[index] == 'X')
        {
             if(s[index + 1] == 'L')
            {
                result += 40;
                index = index + 2;
                continue;
            }
            if(s[index + 1] == 'C')
            {
                result += 90;
                index = index + 2;
                continue;
            }
            result += 10;
            index = index + 1;
        }
        else if (s[index] == 'L')
        {
            result += 50;
            index = index + 1;
        }
        else if(s[index] == 'C')
        {
             if(s[index + 1] == 'D')
            {
                result += 400;
                index = index + 2;
                continue;
            }
            if(s[index + 1] == 'M')
            {
                result += 900;
                index = index + 2;
                continue;
            }
            result += 100;
            index = index + 1;
        }
        else if (s[index] == 'D')
        {
            result += 500;
            index = index + 1;
        }
        else if (s[index] == 'M')
        {
            result += 1000;
            index = index + 1;
        }
    }
    return result;
}
