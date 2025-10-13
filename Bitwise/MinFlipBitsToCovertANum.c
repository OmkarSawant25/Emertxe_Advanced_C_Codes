#include <stdio.h>

int main()
{
    int start, goal;
    printf("Enter the start & goal : ");
    scanf("%d%d", &start, &goal);
    int ans = start ^ goal;
    int count = 0;
    // for (int i = 0; i < 32; i++)
    // {
    //     if (ans & (1 << i))
    //         count++;
    // }
    while(ans != 0)
    {
        ans = ans & (ans - 1);
        count++;
    }
    printf("Min bits flip to convert %d to %d is %d\n", start, goal, count);
    return 0;
}
