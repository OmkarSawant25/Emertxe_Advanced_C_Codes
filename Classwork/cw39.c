/* WAP to reverse each word in a string 
Description : 
    You have to read a string from user and reverse each words in that string

Sample Execution : 
    Test case 1 : 
    Enter the string: Hello how are you
    Reversed string: you are how Hello
*/
#include <stdio.h>
int length(char *str);
void reverse(char *str);
void swap(int j, int i, char *str);
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    getchar();
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
void swap(int j, int i, char *str)
{
    while (j < i)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
}
void reverse(char *str)
{
    int n = length(str) - 1;
    int i = 0;
    swap(i, n, str);
    // while(i<n)
    // {
    //     char temp = str[i];
    //     str[i] = str[n];
    //     str[n] = temp;
    //     i++;
    //     n--;
    // }
    i = 0;
    int j = i;
    while (i <= length(str))
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            swap(j, i - 1, str);
            j = i + 1;
        }
        i++;
    }
}
int length(char *str)
{
    int len = 0;
    while (*str != 0)
    {
        len++;
        str++;
    }
    return len;
}