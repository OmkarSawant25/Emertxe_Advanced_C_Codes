/*
Name        : Omkar Ashok Sawant
Date        : 22/09/2025
Description : WAP to count no. of characters, words and lines, entered through stdin
              Read characters from user till EOF
              If EOF received, print the character count, word count, and line count.
              Code should exactly work like wc command.
I/O         : I -> Hello world
                   Dennis Ritchie
                   Linux
              O -> Character count : 33
                   Line count : 3
                   Word count : 5
*/

#include <stdio.h>

int main()
{
    int L_Count = 0;
    int C_Count = 0;
    int W_Count = 0;
    char ch;
    char prev = '\0';
    while ((ch = getchar()) != EOF) // Running the loop untill it reaches EOF
    {
        C_Count++;                                                  // Incrementing the character count
        if ((ch == '\t' || ch == ' ' || ch == '\n') && prev != ' ') // if ch is space or tab or newline and also the previous should not be space
        {
            W_Count++; // Incrementing the Word count
        }
        if (ch == '\n') // If there is newline then increase the count of Length
        {
            L_Count++; // Incrementing the Line count
        }
        prev = ch; // Updating prev with ch
    }
    if (prev != ' ' && prev != '\t' && prev != '\n')
    {
        W_Count++; // Incrementing the Word count
    }
    printf("Character count : %d\n", C_Count);
    printf("Line count : %d\n", L_Count);
    printf("Word count : %d\n", W_Count);
    return 0;
}
