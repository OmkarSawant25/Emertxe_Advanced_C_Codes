/*
Name : Omkar Ashok Sawant
Date : 29/07/2025
Description : Read a number from user & print numbers in pyramid pattern.
I/O  : I -> 4
       O -> 4
            3 4
            2 3 4
            1 2 3 4
            2 3 4
            3 4
            4
*/

#include <stdio.h>                      //This line includes the standard input-output library in the program.

int main()                              //The main function where the execution of the program begins.
{
    int num;                            //Declaration of the num variable
    printf("Enter the number: ");
    scanf("%d",&num);                   //Taking the value from the user
    
    for(int i = num; i >= 1; i--)       //Starting the outer loop from num and decrementing the value upto 1
    {
        for(int j = i; j <= num; j++)   //Inner loop for printing the values in the column
        {
            printf("%d",j);             //Printing the value
        }
        printf("\n");                   //Printing on new line
    }
    
    for(int i = 2; i <= num; i++)       //Staring the 2nd loop for printing the remaining value
    {
        for(int j = i; j <= num; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;                           //This statement indicates that the program ended successfully
}
