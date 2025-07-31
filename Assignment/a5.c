/*
Name        : Omkar Ashok Sawant
Date        : 30/07/2025
Description : WAP to generate AP, GP, HP series.
I/O         : I ->  Enter the First Number 'A': 2
                    Enter the Common Difference / Ratio 'R': 3
                    Enter the number of terms 'N': 5
                    
              O ->  AP = 2, 5, 8, 11, 14
                    GP = 2, 6, 18, 54, 162
                    HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
                    
*/

#include<stdio.h>

int main()
{
    int A, R, N;                                //Declaring First number, Common difference/ratio & number of terms
    //printf("Enter the First Number 'A': ");     
    scanf("%d",&A);                             //Taking First Number from user
    //printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&R);                             //Taking Common Difference from user
    //printf("Enter the number of terms 'N': ");
    scanf("%d",&N);                             //Taking number of terms from user
    int sum = A;                                // Assigning A to sum
    int multi = A;                              // Assigning A to multi
    int hp = A;                                 // Assigning A to hp
    
    if(N > 0)                                   //Validating
    {
        printf("AP = ");                        //Logic for AP
        for(int i = 1; i <= N; i++)
        {
            printf("%d, ",sum);
            sum += R;                           //adding the common difference to the sum
        }
        
        printf("\nGP = ");                      //Logic for GP
        for(int i = 1; i <= N; i++)
        {
            printf("%d, ",multi);
            multi *= R;                         //multiplying the common difference to the sum
        }
        
        printf("\nHP = ");                      //Logic for HP
        for(int i = 1; i <= N; i++)
        {
            printf("%f, ",(float)1/hp);
            hp += R;                            //Calculating HP
        }
    }
    else
    {
        printf("Invalid input");
    }
    
}
