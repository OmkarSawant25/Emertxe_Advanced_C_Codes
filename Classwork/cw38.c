/* WAP to concatenate two strings */

#include <stdio.h>
void my_strcat(char *str1, char *str2);
int length(char *str1);
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter the string1 : ");
    scanf("%s", str1);
    getchar();
    printf("Enter the string2 : ");
    scanf("%s", str2);
    getchar();
    my_strcat(str1, str2);
    printf("concatenate string is %s\n", str1);
}
void my_strcat(char *str1, char *str2)
{
    int size = length(str1);
    while(*str2 != 0)
    {
        if(*str2 != ' ')
        {
            str1[size] = *str2;
            size++;
        }
        str2++;
    }
    str1[size] = '\0';
    return;
}
int length(char *str1)
{
    int n = 0;
    while(*str1 != 0)
    {
        n++;
        str1++;
    }
    return n;
}