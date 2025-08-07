#include <stdio.h>
float temp_conversion(float);

int main()
{
	float fahrenheit, res = 0;
	printf("Enter the number : ");
	scanf("%f", &fahrenheit);
	res = temp_conversion(fahrenheit);
	printf("The conversion of fahrenheit value %g to degree is %g\n", fahrenheit, res);

	return 0;
}

float temp_conversion(float f)
{
	float d;
	d = (float)5 / 9 * (f - 32);
	// d = 5.0 / 9.0 * (f - 32);
	return (d);
}