#include <stdio.h>

int main()
{
    int a = 100;
    
    for(int i = 1 ; i <= a ; i++)
    {
        if( i%3 == 0 && i%5 == 0 )
        {
            printf("FizzBuzz ");
        }
        else if( i%3 == 0 )
        {
            printf("Fizz ");
        }
        else if( i%5 == 0 )
        {
            printf("Buzz ");
        }
        else 
        {
            printf("%d ",i);
        }
    }
}
