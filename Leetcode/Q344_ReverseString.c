#include <stdio.h>

void reverseString(char* s, int sSize);  // Function prototype

int main() {
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    int size = sizeof(s) / sizeof(s[0]);

    reverseString(s, size);

    printf("Reversed string: ");
    for (int i = 0; i < size; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}

void reverseString(char* s, int sSize)
{
    int i = 0;
    int j = sSize - 1;
    while(i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}