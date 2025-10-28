#include <stdio.h>

// Function prototype
int theMaximumAchievableX(int num, int t);

int main()
{
    int num, t;

    // Input values
    printf("Enter num and t: ");
    scanf("%d %d", &num, &t);

    // Function call and output
    int result = theMaximumAchievableX(num, t);
    printf("The maximum achievable X is: %d\n", result);

    return 0;
}

// Function definition
int theMaximumAchievableX(int num, int t)
{
    return num + 2 * t;
}
