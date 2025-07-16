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
        printf("Please enter a positive integer\n");
    }
    else
    {
        for (; num != 0 ; num = num / 10)
        {
            rem = num % 10;
            result = result * 10 + rem;
        }
        printf("Reversed number is %d\n",result);
    }
}
