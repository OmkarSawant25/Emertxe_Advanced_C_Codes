// 1. WAP to remove vowels from a Strings

#include <stdio.h>

int main()
{
    char str[100], newT[100];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    int i = 0;
    int j = 0;
    while(str[i] != '\0')
    {
        if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' )
            newT[j++] = str[i];
        i++;
    }
    newT[j] = '\0';
    printf("Original String is : %s\n", str);
    printf("Updateed String is : %s\n", newT);
}