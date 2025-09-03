/*
Name        : Omkar Ashok Sawant
Date        : 03/09/2025
Description : WAP to implement strtok function.
              Read string1 and string2 from user.
              Call my_strtok (string1, string2);
              Should treat string2 as delimitter in string1 and should return 1 st field.
              If you call again my_strtok (NULL, string2), it should return second field in string1 treating string2 as delimitter.
I/O         : I -> Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
                   Enter string2 : ;./-:
              O -> Tokens :
                   Bangalore
                   Chennai
                   Kolkata
                   Delhi
                   Mumbai
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]); // Function Prototype

int main()
{
    char str[50], delim[50];

    // printf("Enter the string  : ");
    scanf("%s", str);

    __fpurge(stdout);

    // printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);

    char *token = my_strtok(str, delim); // Function Call
    printf("Tokens :\n");

    while (token) // Runs untill token reaches null
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim); // Function Call
    }
}
char *my_strtok(char str[], const char delim[]) // Function Defination
{
    static int i;     // Declare static variable
    static char *ptr; // Declare static character pointer
    if (str != NULL)  // if str is not equal to NULL then assign ptr as str
    {
        ptr = str; // Point to the string
        i = 0;
    }
    if (ptr == NULL) // If no string left -> return NULL
        return NULL;

    int start = i; // Save starting index of a token

    while (ptr[i] != '\0') // Traverse string
    {
        int j = 0;
        while (delim[j] != '\0') // run the loop untill it reaches null
        {
            if (ptr[i] == delim[j]) // If current char matches a delimiter
            {
                ptr[i] = '\0';          // make it as null
                i++;                    // Move forward
                if (ptr[start] != '\0') // If token is not empty
                    return &ptr[start]; // Return pointer to the token
                else
                {
                    start = i; // Skip consecutive delimiters
                    j = -1;    // Restart delimiter check
                }
            }
            j++;
        }
        i++;
    }
    if (ptr[start] != '\0')
        return &ptr[start]; // for last token
    else
        return NULL; // else null
}