#include <stdio.h>
#include <stdlib.h>

// Function prototype
int findClosest(int x, int y, int z)
{
    if (abs(z - x) < abs(z - y))
        return 1;
    else if (abs(z - x) == abs(z - y))
        return 0;
    else
        return 2;
}

int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    int result = findClosest(x, y, z);
    printf("Closest number is: %d\n", result);

    return 0;
}
