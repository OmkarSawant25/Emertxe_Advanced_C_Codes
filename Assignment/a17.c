/*
Name        : Omkar Ashok Sawant
Date        : 17/08/2025
Description : WAP to check whether a given number is prime or not using function.
              Read a number from user.
              Pass the number to the function is_prime().
              Check the number is prime or not in the function.
              Return 1 if the number is prime, or return 0 if the number is not prime.
              Print the output in the main function based on the return value.
I/O         : I -> Enter a number: 2
              O -> 2 is a prime number
*/

#include <stdio.h>
int is_prime(int); // Function Prototype
int main()
{
    int num;
    // printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 2) // Validation (is the number positive and greater than or equal to 2)
    {
        int res = is_prime(num); // Function Call
        if (res)                 // If res returns 1 then it is a prime number
        {
            printf("%d is a prime number\n", num);
        }
        else
        {
            printf("%d is not a prime number\n", num);
        }
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
int is_prime(int num) // Function Declaration
{
    int flag = 0;                      // Declaring flag variable and assigning it 0
    for (int i = 2; i <= num / 2; i++) // Loop from 2 to num/2
    {
        if (num % i == 0) // Checking is the number divisible by i
        {
            flag = 1; // Making flag = 1
            break;    // breaking the loop
        }
    }
    if (!flag) // if flag is 0 then return 1
    {
        return 1;
    }
    return 0;
}