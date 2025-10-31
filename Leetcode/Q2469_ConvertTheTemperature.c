#include <stdio.h>
#include <stdlib.h>

double *convertTemperature(double celsius, int *returnSize)
{
    double *KF = (double *)malloc(2 * sizeof(double));
    int count = 0;
    KF[count++] = celsius + 273.15;
    KF[count++] = celsius * 1.80 + 32.00;
    *returnSize = count;
    return KF;
}

int main()
{
    double celsius = 36.50;
    int returnSize;

    double *result = convertTemperature(celsius, &returnSize);

    printf("Kelvin: %.5lf\n", result[0]);
    printf("Fahrenheit: %.5lf\n", result[1]);

    free(result); // important to free the allocated memory
    return 0;
}
