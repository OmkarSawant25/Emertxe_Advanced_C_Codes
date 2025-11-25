#include <stdio.h>

int reduceEvenDigits(int num);   // Function prototype

int main()
{
    int num;

    scanf("%d", &num);

    int res = reduceEvenDigits(num);
    printf("%d\n", res);

    return 0;
}

int reduceEvenDigits(int num)
{
    if(num < 0)
        num = -1 * num;

    int sum = 0;
    while(num > 0)
    {
        int rem = num % 10;
        if(rem % 2 == 0)
            sum += rem;
        num = num / 10;
    }

    if(sum == 0)
        return 0;
    
    while(sum >= 10)
    {
        int newsum = 0;
        int x = sum;
        while(x > 0)
        {
            int rem = x % 10;
            if(rem % 2 == 0)
                newsum += rem;
            x = x / 10;
        }
        sum = newsum;
    }

    return sum;

}