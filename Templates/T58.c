/*Check if substring is found in main string*/
#include <stdio.h>
int substr(char *str, char *sub);
int length(char *a);
int main()
{
    char str[50];
    printf("Enter the main string : ");
    scanf("%[^\n]", str);
    getchar();
    char sub[10];
    printf("Enter the sub string : ");
    scanf("%s", sub);
    int res = substr(str, sub);
    if (res == -1)
    {
        printf("sub string is not found\n");
    }
    else
    {
        printf("%s\n", &str[res]);
    }
    return 0;
}
int length(char *a)
{
    int len = 0;
    while (*a != 0)
    {
        len++;
        a++;
    }
    return len;
}
int substr(char *str, char *sub)
{
    int found = -1;
    int size1 = length(str);
    int size2 = length(sub);
    for (int i = 0; i < size1; i++)
    {
        int flag = 1;
        for (int j = 0; j < size2; j++)
        {
            if (str[i + j] != sub[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            found = i;
            break;
        }
    }
    return found;
}

/*-----------------------------------------------Optimized---------------------------------------------------------*/

// #include <stdio.h>
// #include <string.h>
// int subarray(char *str1, char *str2)
// {
//     int size1 = strlen(str1);
//     int size2 = strlen(str2);
//     int index = -1;
//     for (int i = 0; i < size1 - size2 + 1; i++)
//     {
//         int flag = 1;
//         for (int j = 0; j < size2; j++)
//         {
//             if (str1[i + j] != str2[j])
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             index = i;
//             break;
//         }
//     }
//     return index;
// }
// int main()
// {
//     char str1[] = "hello there hi";
//     char str2[] = "there";

//     int x = subarray(str1, str2);
//     printf("%s", &str1[x]);
// }