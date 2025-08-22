/*
Name        : Omkar Ashok Sawant
Date        : 22/08/2025
Description : WAP to generate negative fibbonacci numbers using recursion.
              In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence
              0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
              By definition, the first two numbers in the Fibonacci sequence are 0 and 1,
              each subsequent number is the subtraction of the previous two.
I/O         : I -> Enter the value of N : 7
              O -> Factorial of the given number is 5040
*/

#include <stdio.h>
void negative_fibonacci(int, int, int, int); // Function Prototype
int main()
{
    int limit;
    // printf("Enter a number : ");
    scanf("%d", &limit);
    if (limit <= 0) // Validating
    {
        negative_fibonacci(limit, 0, 1, 0); // Function Call
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
void negative_fibonacci(int limit, int num1, int num2, int next) // Function Defination
{
    if (next >= limit && next <= -limit) // Base condition
    {
        printf("%d, ", next);
        num1 = num2;
        num2 = next;
        next = num1 - num2;
        negative_fibonacci(limit, num1, num2, next); // Recursive call
    }
    return;
}

// #include <stdio.h>
// void negative_fibonacci(int, int, int, int); // Function Prototype

// int main()
// {
//     int limit;
//     printf("Enter the limit : ");
//     scanf("%d", &limit);
//     if (limit <= 0) // Validating that the limit is positive number
//     {
//         negative_fibonacci(limit, 0, 1, 0); // Function Calling
//     }
//     else
//     {
//         printf("Invalid input\n"); // if limit is negative
//     }
//     return 0;
// }

// void negative_fibonacci(int limit, int first, int second, int sum) // Function Defination
// {
//     if (sum >= limit) // Checking the condition for printing upto the limit
//     {
//         printf("%d, ", sum);                           // Printing the sum
//         first = second;                                // Assigning second to first
//         second = sum;                                  // Assigning sum to second
//         sum = first - second;                          // Adding first and second to sum
//         negative_fibonacci(limit, first, second, sum); // recursive function call
//         // if(sum = limit)
//         // {
//         //     return;
//         // }
//     }
// }

// #include <stdio.h>
// void fibo(int a, int b, int n)
// {
//     if (a >= n)
//     {
//         printf("%d ", a);
//         if(a-b < n) return;
//         fibo(b, a - b, n);
//     }

//     // if(a == n)
//     // {
//     //     printf("%d ", a);
//     //     return;
//     // }
//     return;
// }

// int main()
// {
//     int limit;
//     printf("Enter the limit : ");
//     scanf("%d", &limit);
//     if (limit <= 0) // Validating that the limit is positive number
//     {
//         fibo(0, 1, limit); // Function Calling
//     }
//     else
//     {
//         printf("Invalid input\n"); // if limit is negative
//     }
//     return 0;
// }

// void positive_fibonacci(int limit, int first, int second, int sum) // Function Defination
// {
//     if (sum >= limit && sum <= -limit) // Checking the condition for printing upto the limit
//     {
//         printf("%d, ", sum);                           // Printing the sum
//         first = second;                                // Assigning second to first
//         second = sum;                                  // Assigning sum to second
//         sum = first + second;                          // Adding first and second to sum
//         positive_fibonacci(limit, first, second, sum); // recursive function call
//     }
// }