/* CW41 - WAP to reverse each character of the word in a given string
Description : 
    You have to read a string from the user and reverse each character of the word in a given string
Sample Execution : 
    Test case 1 : 
    Enter the string: Hello how are you
    Reversed string: olleH woh era uoy 
*/

#include <stdio.h>
void reverse(char *str);
int length(char *str);
void swap(int i, int j, char *str);
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    getchar();
    reverse(str);
    printf("Reversed string: %s\n", str);
}
void reverse(char *str)
{
    int n = length(str);
    int i = 0;
    int j = i;
    while (i <= n)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            swap(j, i - 1, str);
            j = i + 1;
        }
        i++;
    }
}
void swap(int i, int j, char *str)
{
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
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