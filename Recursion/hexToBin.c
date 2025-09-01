#include <stdio.h>

void hextobin(int digit, int *count) {
    if (*count > 31) {
        return;
    }
    (*count)++;
    hextobin(digit / 2, count);   // Recursive call
    printf("%d", digit % 2);      // Print remainder
}

int main() {
    int num, count = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%x", &num);   // Take input in hex format (e.g., 1A, FF)

    printf("Binary representation: ");
    if (num == 0) {
        printf("0");
    } else {
        hextobin(num, &count);
    }

    printf("\nTotal bits = %d\n", count);

    return 0;
}