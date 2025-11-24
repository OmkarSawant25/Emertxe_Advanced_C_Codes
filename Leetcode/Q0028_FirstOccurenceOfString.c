#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle)
{
    int h = strlen(haystack);
    int n = strlen(needle);
    int found = -1;
    for(int i = 0; i < h; i++)
    {
        int flag = 1;
        for(int j = 0; j < n; j++)
        {
            if(haystack[i+j] != needle[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            found = i;
            break;
        }
    }
    return found;
}

int main() {
    char haystack[100], needle[100];

    printf("Enter the main string (haystack): ");
    scanf("%[^\n]", haystack);
    getchar(); // clear newline from buffer

    printf("Enter the substring to search (needle): ");
    scanf("%[^\n]", needle);

    int index = strStr(haystack, needle);

    if (index != -1)
        printf("Substring found at index %d\n", index);
    else
        printf("Substring not found\n");

    return 0;
}

// int substr(char *str, char *sub)
// {
//     int found = -1;
//     int size1 = length(str);
//     int size2 = length(sub);
//     for(int i = 0; i < size1; i++)
//     {
//         int flag = 1;
//         for(int j = 0; j < size2; j++)
//         {
//             if(str[i+j] != sub[j])
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag)
//         {
//             found = i;
//             break;
//         }
//     }
//     return found;
// }
