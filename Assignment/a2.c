/* 
Name : Omkar Ashok Sawant 
Date : 18/07/2025
Description : Enter the value of n and first day to show which day of is on the nth number.
I/O :
*/

#include <stdio.h>

int main()
{
    int n,start_day,res;
    printf("Enter the value of'n' : ");
    scanf("%d",&n);                             //Taking Input from the user
    if(n>=1 && n<=365)                          //Condition validating
    {
        printf("Choose First Day :\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
        printf("Enter the option to set the first day : ");
        scanf("%d",&start_day);                 //Taking Input from the user
        if(start_day>=1 && start_day<=7)        //Condition validating
        {
            res =(n + start_day - 1) % 7;       //Calculation of the present day at the nth number
        
            switch(res)
            {
                case 0 :
                    printf("The day is Saturday\n");
                    break;
                case 1 :
                    printf("The day is Sunday\n");
                    break;
                case 2 :
                    printf("The day is Monday\n");
                    break;
                case 3 :
                    printf("The day is Tuesday\n");
                    break;
                case 4 :
                    printf("The day is Wednesday\n");
                    break;
                case 5 :
                    printf("The day is Thursday\n");
                    break;
                case 6 :
                    printf("The day is Friday\n");
                    break;
            }
        }
        
        else
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7\n"); //Error Statement
        }
    }
    else
        {
            printf("Error: Invalid Input, n value should be > 0 and <= 365\n");  //Error Statement
        }
    
}
