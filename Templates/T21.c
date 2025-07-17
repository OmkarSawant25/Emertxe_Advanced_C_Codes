#include <stdio.h>

int main()
{
    int num;
    int result = 0;
    int rem = 0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("Please enter a positive integer");
    }
    else
    {
        while(num != 0)
        {
            rem = num % 10;
            result = result * 10 + rem;
            num = num/10;
        }
        printf("Reversed number is %d",result);
    }
}






   


   














