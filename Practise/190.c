#include <stdio.h>

int reverseBits(int n) {
    int rev = 0;
    for(int i = 31; i >= 0; i--)
    {
        (rev << 31 - i) | (n >> i) & 1;
    }
    return rev;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int result = reverseBits(num);
    printf("Reversed bits = %u\n", result);

    return 0;
}
