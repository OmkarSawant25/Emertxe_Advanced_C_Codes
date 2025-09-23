#include <stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int n)
{
    if(n <= 0)
    {
        return false;
    }
    while(n % 4 == 0)
    {
        n/=4;
    }
    return n == 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfFour(num))
        printf("%d is a power of four.\n", num);
    else
        printf("%d is not a power of four.\n", num);

    return 0;
}
