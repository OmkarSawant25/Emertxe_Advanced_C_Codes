#include <stdio.h>

// Declaration of the constant defined in file1.c
extern const int x;   // same as 'extern const int x;'

void printX() {
    printf("In file2: x = %d\n", x);
}

int main() {
    printX();
    return 0;
}
