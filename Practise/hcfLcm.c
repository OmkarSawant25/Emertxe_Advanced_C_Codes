#include <stdio.h>

int main()
{
    int num1, num2, hcf, lcm, max;
    printf("Enter the number : ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        max = num1;
    else
        max = num2;

    for (int i = 1; i <= max; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            hcf = i;
        }
    }
    lcm = num1 * num2 / hcf;
    printf("Hcf is %d \n", hcf);
    printf("Lcm is %d \n", lcm);
    return 0;
}