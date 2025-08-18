#include <stdio.h>
int maze(int a, int b)
{
    int rightWays = 0;
    int downWays = 0;
    if (a == 1 && b == 1)
        return 1;
    if (a == 1) // cannot go down
    {
        rightWays += maze(a, b - 1);
    }
    if (b == 1) // cannot go right
    {
        downWays += maze(a - 1, b);
    }
    if (a > 1 && b > 1)
    {
        downWays += maze(a - 1, b);
        rightWays += maze(a, b - 1);
    }

    int totalWays = rightWays + downWays;
    return totalWays;
}
int main()
{
    int a, b;
    printf("Enter no of rows of the maze : ");
    scanf("%d", &a);
    printf("Enter no of columns of the maze : ");
    scanf("%d", &b);
    int noOfWays = maze(a, b);
    printf("%d\n", noOfWays);
    return 0;
}
