/*
Name        : Omkar Ashok Sawant
Date        : 28/08/2025
Description : WAP to implement atoi function.
              int my_atoi(const char *s)
              The function will recieve a string and covert the number stored in the string into exact integer number.
              Return the number.
I/O         : I -> Enter a numeric string: 12345
              O -> String to integer is 12345
              I -> Enter a numeric string: +-12345
              O -> String to integer is 0
*/

#include <stdio.h>
int my_atoi(const char []);     // Function prototype
int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));  // Function call
    return 0;
}
int my_atoi(const char str[])       // Function Defination
{
    int i = 0;
    int num = 0;
    if(str[i] == '+' || str[i] == '-')  // check if starting of the string is + or -
    {
        i++;
    }
    while(str[i] >= 48 && str[i] <= 57) // Check if the string is a digit or not
    {
        int integer = str[i] - 48;      // Integer is updated as str[i] - 48 to get the digit
        num = num * 10 + integer;       // Adding the number to the integer
        i++;                            // Incrementing the value of i
    }
    if(str[0] == '-')                   // if str[0] is negative then return -num
    {
        return num * (-1); 
    }
    else
        return num;                     // else return num
}