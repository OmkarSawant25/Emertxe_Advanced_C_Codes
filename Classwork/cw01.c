#include <stdio.h>

int main()
{
    char x;
    printf("Enter the character :");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
    {
        printf("The character is Upper Case.\n");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("The character is Lower Case.\n");
    }
    else if (x >= '0' && x <= '9')
    {
        printf("The character is Digit.\n");
    }
    else
    {
        printf("The character not an alphabet or digit.\n");
    }

    return 0;
}
