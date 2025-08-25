/*WAP to check if character is found in a string
Instructions: Read the string and character from the user
Eg:
Enter the string : We are searching for a character
Entre a character : r
Output : re searching for a character*/
// #include <stdio.h>

// int main()
// {
//     char str[25], ch;
//     printf("Enter the string : ");
//     scanf("%[^\n]", str);
//     getchar();
//     printf("Enter a character : ");
//     scanf("%c", &ch);
//     int i = 0, j = -1;
//     // while (str[i] != '\0')
//     // {
//     //     if (str[i] == ch)
//     //     {
//     //         j = i;
//     //         i++;
//     //         break;
//     //     }
//     //     i++;
//     // }
//     while (*str != '\0')
//     {
//         if (*(str+i) == ch)
//         {
//             j = i;
//             i++;
//             break;
//         }
//         i++;
//     }

//     if (j == -1)
//     {
//         printf("Character is not found in the string\n");
//         return 0;
//     }
//     // while (*(str+j) != '\0')
//     // {
//     //     putchar(*(str+j));
//     //     j++;
//     // }
//     printf("%s ",&str[j]);
//     return 0;
// }


/*----------------------------------Using Functions---------------------------------------------*/

#include <stdio.h>
void charfound(char *str, char ch)
{
    int i = 0, j = -1;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            j = i;
            break;
        }
        i++;
    }
    if (j == -1)
    {
        printf("Character is not found in the string\n");
        return;
    }
    printf("%s ",&str[j]);
    return;
}
int main()
{
    char str[25], ch;
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    getchar();
    printf("Enter a character : ");
    scanf("%c", &ch);
    charfound(str, ch);
    return 0;
}