#include <stdio.h>
void rev(int);
int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    rev(limit);

    return 0;
}
void rev(int n)
{
    if (n > 0)
    {
        // printf("%d ", n);
        rev(n - 1);
        printf("%d ", n);
    }

    // printf("%d ",n);
}