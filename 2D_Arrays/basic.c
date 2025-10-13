#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("%p\n", arr + 1);
    printf("%p\n", &arr[0] + 1);
    printf("%p\n", &arr + 1);

	return 0;
}
