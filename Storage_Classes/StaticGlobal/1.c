#include <stdio.h>

extern int num;  // trying to access num from file1.c

int main() {
    printf("num = %d\n", num);
    return 0;
}
