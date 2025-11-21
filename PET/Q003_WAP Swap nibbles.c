// Q003_WAP Swap nibbles.c

#include<stdio.h>

void swap(unsigned int *a)
{
    unsigned int t = *a;
    *a = (t & 0xF0) >> 4 | (t & 0x0F) << 4;
}

int main()
{
	unsigned int a = 0XAB;
    printf("Before Swapping the nibbles a = %X\n", a);
    swap(&a);
    printf("After Swapping the nibbles a = %X\n", a);
	return 0;
}
