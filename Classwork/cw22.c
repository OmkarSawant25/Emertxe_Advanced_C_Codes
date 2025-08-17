/*You have to read a number from user and find the square and cube of a number.*/

#include <stdio.h>
void cube(int, int *);
void square(int, int *);
int main()
{
    int num, sq, cu;
    printf("Enter the number : ");
    scanf("%d", &num);
    square(num, &sq);
    printf("Square is %d\n", sq);
    cube(num, &cu);
    printf("Cube is %d\n", cu);
    return 0;
}
void cube(int n, int *cu)
{
    *cu = n * n * n;
}
void square(int n, int *sq)
{
    *sq = n * n;
}