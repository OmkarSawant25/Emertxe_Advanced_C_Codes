/*You have to read a string from user, without using strcpy() function you have to copy the string.
Note : Atleast 1 function call should be in your program. */
#include <stdio.h>
void my_strcpy(char *str1, char *str2)
{
    while(*str1 != '\0')
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the string : ");
    scanf("%[^\n]", str1);
    getchar();
    my_strcpy(str1, str2);
    printf("Copied string is %s\n", str2);
}