#include <stdio.h>
#include <string.h>

int minCost(char *colors, int *neededTime, int neededTimeSize)
{
    int n = strlen(colors);
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (colors[i] == colors[i - 1])
        {
            if (neededTime[i] < neededTime[i - 1])
            {
                min += neededTime[i];
                neededTime[i] = neededTime[i - 1];
            }
            else
            {
                min += neededTime[i - 1];
            }
        }
    }
    return min;
}

int main()
{
    char colors[] = "abaac";
    int neededTime[] = {1, 2, 3, 4, 5};
    int neededTimeSize = sizeof(neededTime) / sizeof(neededTime[0]);

    int result = minCost(colors, neededTime, neededTimeSize);
    printf("Minimum time to make the rope colorful: %d\n", result);

    return 0;
}
