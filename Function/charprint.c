#include <stdio.h>
void print_char(char arr[], int n); // Function prototype

int main()
{
    char ch[5];
    printf("Enter the characters : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &ch[i]);
    }
    print_char(ch, 5);
    return 0;
}

void print_char(char ch[], int n) // Function definition
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", ch[i]);
    }
}