/*
Name : Omkar Ashok Sawant
Date : 24/07/2025
Description : To print numbers in X pattern.
I/O : I -> Enter the number: 4
      O ->1  4
           23
           23
          1  4
*/

#include <stdio.h>

int main()
{
    int num;                                    //Declaration of int variable
    printf("Enter the number: ");               
    scanf("%d",&num);                           //Taking value from the user
    
    for(int i = 1; i <= num; i++)               //Starting the nested for loop for row
    {
        for(int j = 1; j<= num; j++)            //Starting the nested for loop for column
        {
            if((i == j) || (i+j == num+1))      //Checking the condition
            {
                printf("%d",j);                 //Printing the column number
            }
            else
            {
                printf(" ");                    //Printing spaces
            }
        }
        printf("\n");                           //Printing on next row
    }
    return 0;
}
