#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;

	int sum;

	sum = x + y;
	printf("sum = %d\n", sum);

	float f1, f2;
	f1 = 1.1;
	f2 = 2.2;

	printf("f1 = %f , f2 = %f\n", f1, f2);

	double d1 = 1.123;
	double d2 = 1.0234;

	printf("d1 = %lf , d2 = %lf\n", d1, d2);
	printf("d1 = %lf\nd2 = %lf\n", d1, d2);

	char ch1, ch2;
	ch1 = 'A';
	ch2 = 'B';

	printf("ch1 = %c , ch2 = %c\n", ch1, ch2);
}
