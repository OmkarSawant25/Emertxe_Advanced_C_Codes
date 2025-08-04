/*
Name : Omkar Ashok Sawant
Date : 23/07/2025
Description : Check wheather a number is perfect or not {By Exclusion Method}
I/O : I -> 6
      O -> Yes, entered number is perfect number
*/
#include <stdio.h>

int main()
{
    int num, sum = 0; // Declaration
    printf("Enter a number: ");
    scanf("%d", &num); // Taking input from the user

    if (num >= 0) // Validating
    {
        for (int i = 1; i < num; i++) // Initializing the loop
        {
            if (num % i == 0) // Checking the number is divisible or not
            {
                sum = sum + i; // Adding the divisors
            }
        }
        if (sum == num) // Checking is the sum equal to the given number or not
        {
            printf("Yes, entered number is perfect number\n");
        }
        else
        {
            printf("No, entered number is not a perfect number\n");
        }
    }

    else
    {
        printf("Error : Invalid Input, Enter only positive number\n");
    }
}