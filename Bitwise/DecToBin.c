#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 31; i >= 0; i--)
    {
        printf("%d ",(unsigned)(num >> i) & 1);
    }

    // for (int i = 31; i >= 0; i--)
    // {
    //     printf("%d ", num & (1 << i) ? 1 : 0);
    // }

    return 0;
}
