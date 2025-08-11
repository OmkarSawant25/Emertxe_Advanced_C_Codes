#include <stdio.h>

int main()
{
	int n = 0x12345678;
	int *ptr = &n;
	char *cptr = &n;
	short *sptr = &n;

	printf("Address of n : %p\n", ptr);
	printf("Value of n : %x\n", *ptr);
	printf("Address of n : %p\n", sptr);
	printf("Value of n : %x\n", *sptr);
	printf("Address of n : %p\n", cptr);
	printf("Value of n : %x\n", *cptr);
	// printf("Value of n : %x\n", cptr[0]); //We can also use arr[i] = *(arr + i)

	// printf("\nValue of n before modification : %x\n", n);
	// cptr[1] = 0xFF;
	// printf("Value of n after modification : %x\n", n);
	printf("\n Address of n before modification : %p\n", ptr);
	ptr++;
	printf("Address of n after modification : %p\n", ptr);
	return 0;
}
