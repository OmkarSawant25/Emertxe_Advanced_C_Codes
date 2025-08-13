/*Check if number is prime*/

#include <stdio.h>
int prime(int);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int result = prime(num);
    if (result)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    return 0;
}

int prime(int p)
{
    int count = 0;
    for (int i = 2; i < p / 2; i++)
    {
        if (p % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
        return 1;
    else
        return 0;
}