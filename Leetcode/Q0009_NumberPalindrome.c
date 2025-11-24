#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int num = x;
    int sum = 0;
    if(x < 0)
    {
        return 0;
    }
    while(num != 0)
    {
        sum = sum * 10 + (num % 10);
        num = num / 10;
    }
    if(sum == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }

    return 0;
}
