/*
Name        : Omkar Ashok Sawant
Date        : 28/08/2025
Description : WAP to implement itoa function.
              void itoa(int n, char *s)
              Convert integer n into a string and store the string in s.
I/O         : I -> Enter the number : -1234
              O -> Integer to string is -1234
              I -> Enter the number : 1234
              O -> Integer to string is 1234
*/

#include <stdio.h>
void itoa(int num, char str[]); // Function Prototype

int main()
{
    int num = 0;
    char str[50];

    printf("Enter the number: ");
    scanf("%d", &num);

    itoa(num, str); // Function Call

    printf("Integer to string is %s\n", str);
}
void itoa(int num, char str[]) // Function Defination
{
    int rem = 0;
    int i = 0;
    int j = 0;
    if (num == 0)
    {
        str[i] = '0';
        str[++i] = '\0';
    }
    else
    {
        if (num < 0) // If num is -ve then make it then multiply it by -1
        {
            num = num * (-1);
            str[i] = '-';
            i++;
            j = 1;
        }

        while (num != 0) // Run the loop until it reaches 0
        {
            rem = num % 10;
            str[i++] = rem + 48; // Storing the reminder value as ascii in the string
            num /= 10;
        }
        str[i] = '\0'; // Adding the null at the end of the string
        i--;
        while (j < i) // Swap the elements of the string
        {
            int temp = str[j];
            str[j] = str[i];
            str[i] = temp;
            j++;
            i--;
        }
    }
}