#include <stdio.h>
#include <string.h>

void printBinary(int n); // Function prototype
int reverseNumber(int n);    // Function prototype

int main()
{
    int n;
    scanf("%d", &n);

    printf("Binary equivalent: ");
    printBinary(n);

    printf("\nReversed number: %d\n", reverseNumber(n));

    return 0;
}

void printBinary(int n)
{
    if(n == 0)
        return;
    printBinary(n/2);
    printf("%d ", n % 2);
}

int reverseNumber(int n)
{
    static int rev = 0;
    if(n == 0)
    {
        int ans = rev;
        // rev = 0;
        return ans;
    }
    rev = rev * 10 + (n % 10);

    return reverseNumber(n/10);
}