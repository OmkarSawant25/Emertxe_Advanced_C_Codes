/*
Name        : Omkar Ashok Sawant
Date        : 26/08/2025
Description : Squeeze the character in s1 that matches any character in the string s2.
I/O         : I -> Enter s1 : Dennis Ritchie
                   Enter s2 : Linux
              O -> After squeeze s1 : Des Rtche
*/

#include <stdio.h>
void squeeze(char *str1, char *str2); // Function prototype
int main()
{
    char str1[100];
    printf("Enter s1 : ");
    scanf("%[^\n]", str1);
    getchar();

    char str2[100];
    printf("Enter s2 : ");
    scanf("%[^\n]", str2);
    getchar();

    squeeze(str1, str2); // Function call
    printf("After squeeze s1 : %s\n", str1);
    return 0;
}

void squeeze(char *str1, char *str2) // Function defination
{
    int i = 0;
    while (str1[i] != 0)
    {
        int j = 0;
        while (str2[j] != 0)
        {
            if (str1[i] == str2[j])
            {
                int k = i;
                while (str1[k] != 0)
                {
                    str1[k] = str1[k + 1];
                    k++;
                }
                i--;
            }
            j++;
        }
        i++;
    }
}

// void squeeze(char *str1, char *str2) // Function defination
// {
//     int i = 0;
//     while (str1[i] != 0)
//     {
//         int j = 0;
//         while (str2[j] != 0)
//         {
//             if (str1[i] == str2[j])
//             {
//                 for (int k = i; str1[k] != 0; k++)
//                 {
//                     str1[k] = str1[k + 1];
//                 }
//                 i--;
//             }
//             j++;
//         }
//         i++;
//     }
// }