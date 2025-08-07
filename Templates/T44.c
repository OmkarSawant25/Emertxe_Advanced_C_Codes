/* Check if number is odd or even */

#include <stdio.h>
int oddEven(int);
int main()
{
    int num, result;
    scanf("%d", &num);
    result = oddEven(num);
    if(result)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
}
int oddEven(int num)
{
    int res = 0;
    if(num % 2 == 0)
    {
        res = 1;
    }
    return res;
}
