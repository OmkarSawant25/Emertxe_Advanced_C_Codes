#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char *s)
{
    char a[strlen(s)];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            a[++top] = s[i];
        else
        {
            if (top == -1)
                return false;

            char c = a[top--];

            if ((c == '(' && s[i] == ')') ||
                (c == '{' && s[i] == '}') ||
                (c == '[' && s[i] == ']'))
                continue;
            else
                return false;
        }
    }

    return (top == -1);
}

int main()
{
    char s[100];

    printf("Enter a string of brackets: ");
    scanf("%s", s);

    if (isValid(s))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}
