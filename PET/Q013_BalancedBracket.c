#include <stdio.h>
#include <string.h>

int isBalanced(const char *s);   // Function prototype

int main()
{
    char s[100];

    scanf("%s", s);

    if (isBalanced(s))
        printf("Yes, Entered string is Balanced\n");
    else
        printf("No, Entered string is not Balanced\n");

    return 0;
}

int isBalanced(const char *s)
{
    char arr[strlen(s)];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            arr[++top] = s[i];
        else
        {
            if(top == -1)
                return 0;
            
            char c = arr[top--];
            if ((c == '(' && s[i] == ')') ||
                (c == '{' && s[i] == '}') ||
                (c == '[' && s[i] == ']'))
                continue;
            else
                return 0;
        }
    }
    if(top == -1)
        return 1;
    return 0;
}
