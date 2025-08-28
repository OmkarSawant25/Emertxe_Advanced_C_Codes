/*WAP to check a given string is palindrome or not. You have to read a string from user and check the string is palindrome or not.*/
#include <stdio.h>
int palindrome(char *str);
int length(char *str);
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    int res = palindrome(str);
    if(res)
    {
        printf("Yes, Entered string is palindrome.\n");
    }
    else
    {
        printf("No, Entered string is not palindrome.\n");
    }
}
int palindrome(char *str)
{
    int n = length(str);
    for(int i = 0; i < n/2; i++)
    {
        if(str[i] != str[n-i-1])
        {
            return 0;
        }
    }
    return 1;
}
int length(char *str)
{
    int len = 0;
    while(*str != 0)
    {
        len++;
        str++;
    }
    return len;
}