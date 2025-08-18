#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightWays = 0;
    int downWays = 0;
    if (cr == er && cc == ec)
        return 1;
    if (cr == er) // only rightway maze
    {
        rightWays += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec) // only downway maze
    {
        downWays += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightWays += maze(cr, cc + 1, er, ec);
        downWays += maze(cr + 1, cc, er, ec);
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
    int noOfWays = maze(1, 1, a, b);
    printf("%d\n", noOfWays);
    return 0;
}
