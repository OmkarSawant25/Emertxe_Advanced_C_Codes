#include <stdio.h>


int main()
{
    int num = 1231;
    int x = num;
    int rev = 0;
    while(num != 0)
    {
        int r = num % 10;
        rev = rev * 10 + r;
        num = num/10;
    }
    if(x == rev)
    {
        printf("Its a Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}