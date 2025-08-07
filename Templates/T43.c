/* Convert Fahrenheit to Celsius */

#include <stdio.h>
float conversion(int);
int main()
{
    int fahrenheit;
    float celsius;
    scanf("%d", &fahrenheit);
    celsius = conversion(fahrenheit);
    printf("%f\n", celsius);
}
float conversion(int f)
{
    float res = (f - 32) * 5.0 / 9.0;
    return res;
}
