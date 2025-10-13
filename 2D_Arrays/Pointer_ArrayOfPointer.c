#include <stdio.h>

int main() {
    // int a = 10, b = 20, c = 30;
    // int *ptr[3];  // array of 3 pointers

    // ptr[0] = &a;  // store address of a
    // ptr[1] = &b;  // store address of b
    // ptr[2] = &c;  // store address of c

    // printf("%d %d %d\n", *ptr[0], *ptr[1], *ptr[2]); 

    int a[2] = {1,2};
    int b[2] = {10,12};
    int c[2] = {11,20};
    int *ptr[3];  // array of 3 pointers

    ptr[0] = a;  // store address of a
    ptr[1] = b;  // store address of b
    ptr[2] = c;  // store address of c

    printf("%d %d %d\n", *ptr[0], *ptr[1], *ptr[2]); 
    return 0;
}
