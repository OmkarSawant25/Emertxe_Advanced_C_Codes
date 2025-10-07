/*T66 - Print bits of the number

WAP to print bits of the entered number

Eg: Enter the number : 10
    00000000000000000000000000001010
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}