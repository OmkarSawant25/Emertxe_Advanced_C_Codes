/*Write a function to convert temperature given in degree Fahrenheit to degree Celsius*/
#include <stdio.h>
float temperatureConversion(float);

int main()
{
    float fahrenheit;
    printf("Enter the Fahrenheit : ");
    scanf("%f", &fahrenheit);
    printf("Degree Celsius %f\n", temperatureConversion(fahrenheit));
    return 0;
}

float temperatureConversion(float f)
{
    float c = 5.0 / 9.0 * (f - 32);
    return c;
}