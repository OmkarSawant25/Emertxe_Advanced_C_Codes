#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;
    printf("size of integer is %ld bytes\n", sizeof(int));
    printf("Address = %p, Value = %d\n", p, *p);
    // Void Pointer - Genric pointer
    void *p0;
    p0 = p;
    printf("Address = %p\n", p0); //*p0 will give an error as it is not point to a particular variable
    printf("size of void Pointer is %ld bytes\n", sizeof(*p0));
    printf("Address = %p\n", p0 + 1);
    return 0;
}
