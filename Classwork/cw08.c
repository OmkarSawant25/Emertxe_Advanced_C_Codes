#include <stdio.h>

int main()
{
    int n, m;
    // printf("Enter n : ");
    scanf("%d", &n);
    // printf("Enter m : ");
    scanf("%d", &m);
    int mid1 = n / 2 + 1;
    int mid2 = m / 2 + 1;

    for (int i = 1; i <= n; i++)
    {
        if ((mid1 - mid2) < i && (mid1 + mid2) > i)
        {
            printf("*");
        }
        else
        {
            printf("$");
        }
    }
}
