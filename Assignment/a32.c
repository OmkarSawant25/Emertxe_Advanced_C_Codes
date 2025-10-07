/*
Name        : Omkar Ashok Sawant
Date        : 07/10/2025
Description : WAP to check N th bit is set or not, If yes, clear the M th bit
              Read a number, M and N from the user.
              You need to check whether N th bit is set(1) or not,
              If yes, then you need to clear the M th bit of the number and print the updated value of num
I/O         : I  -> Enter the number: 19
                    Enter 'N': 1
                    Enter 'M': 4
              O  -> Updated value of num is 3
*/

#include <stdio.h>

int main()
{
    int num, M, N;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter 'N': ");
    scanf("%d", &N);
    printf("Enter 'M': ");
    scanf("%d", &M);

    if ((num & (1 << N)) != 0) // check if the nth bit is set or not. If set then perform the operation of updating the mth bit
    {
        num = num & (~(1 << M)); // Clear the mth bit
    }
    printf("Updated value of num is %d\n", num);
    return 0;
}