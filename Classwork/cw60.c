/*Write macros to get, set and clear Nth bit in an integer*/

#include <stdio.h>

#define GET(num, n) ((num >> n) & 1)
#define SET(num, n) (num | (1 << n))
#define CLEAR(num, n) (num & ~(1 << n))

int main()
{
    int num, pos;
    // printf("Enter the number : ");
    scanf("%d", &num);
    // printf("Enter the position : ");
    scanf("%d", &pos);
    printf("%d\n", GET(num, pos));
    printf("%d\n", SET(num, pos));
    printf("%d\n", CLEAR(num, pos));
}