/* CW62 - WAM to swap any two values of basic type using temporary variable */

#include <stdio.h>
#define SWAP(a, b)  \
{                   \
    int temp = a;   \
    a = b;          \
    b = temp;       \
}                   

int main()
{
    int num1, num2;
    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);
    SWAP(num1, num2);
    printf("After swapping : \n");
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);
    return 0;
}