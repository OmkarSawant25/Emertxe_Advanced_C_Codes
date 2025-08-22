/*
Name        : Omkar Ashok Sawant
Date        : 21/08/2025
Description : WAP to find factorial of given number using recursion.
              Read number n from user.
              Validate the given number
              Call main function from main for calculating factorial.
              Prompt for continue option without using loop.
I/O         : I -> Enter the value of N : 7
              O -> Factorial of the given number is 5040
*/

#include <stdio.h>

int main()
{
    static int num; // Declaring static int variable num
    static unsigned long long int fact = 1;
    static char flag = 1;

    if (flag) // Checking the condition
    {
        // printf("Enter the value of N : ");
        scanf("%d", &num);
        flag = 0;
    }
    if (num < 0) // Printing Error if num is negative
    {
        printf("Invalid Input\n");
        return 0; // terminating the loop
    }
    if (num == 0) // if num == 0 then print the fact and terminate it
    {
        printf("Factorial of the given number is %lld\n", fact);
        return 1;
    }
    fact = num * fact; // fact = fact * num
    num--;             // decrement the num
    main();            // calling the main function
}