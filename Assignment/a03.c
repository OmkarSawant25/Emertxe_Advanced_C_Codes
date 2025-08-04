#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        while (num1 <= n)
        {
            printf("%d ", num1);
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
    }
    else
    {
        printf("Invalid input\n");
    }
}

/*
Name : Omkar Ashok Sawant
Date : 22/07/2025
Description : Generate positive Fibonacci sequence upto given number.
I/O : I -> Enter a number: 10
      O -> 0 1 1 2 3 5 8
*/
/*
#include <stdio.h>

int main()
{
    int firstterm = 0, secondterm = 1, sum,n;
    //printf("Enter a number: ");
    scanf("%d",&n);

    if(n >= 0)                                      //Validating
    {
        while(firstterm <= n)                       //checking condition of first term
        {
            printf("%d ",firstterm);
            sum = firstterm + secondterm;           // sum of firstterm and secondterm
            firstterm = secondterm;                 // Swapping
            secondterm = sum;
        }
    }
    else
    {
        printf("Invalid input\n");
    }
}*/
