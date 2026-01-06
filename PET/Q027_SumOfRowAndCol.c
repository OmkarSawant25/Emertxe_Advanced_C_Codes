#include <stdio.h>
void rowSum(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d sum=%d\n", i, sum);
    }
}
void colSum(int r, int c, int a[r][c])
{
    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
            sum += a[i][j];
        printf("Column %d sum=%d\n", j, sum);
    }
}
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    rowSum(r, c, a);
    colSum(r, c, a);
}