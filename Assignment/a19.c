/*
Name        : Omkar Ashok Sawant
Date        : 20/08/2025
Description : WAP to generate fibbonacci numbers using recursion.
I/O         : I -> Enter a number: 8
              O -> 0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>
void positive_fibonacci(int, int, int, int); // Function Prototype

int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if (limit >= 0) // Validating that the limit is positive number
    {
        positive_fibonacci(limit, 0, 1, 0); // Function Calling
    }
    else
    {
        printf("Invalid input\n"); // if limit is negative
    }
    return 0;
}

void positive_fibonacci(int limit, int first, int second, int sum) // Function Defination
{
    if (sum <= limit) // Checking the condition for printing upto the limit
    {
        printf("%d, ", sum);                           // Printing the sum
        first = second;                                // Assigning second to first
        second = sum;                                  // Assigning sum to second
        sum = first + second;                          // Adding first and second to sum
        positive_fibonacci(limit, first, second, sum); // recursive function call
    }
}
