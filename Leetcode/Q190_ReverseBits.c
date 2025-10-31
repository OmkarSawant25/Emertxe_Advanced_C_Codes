#include <stdio.h>

int reverseBits(int n) {
    unsigned int rev = 0;
    for (int i = 0; i < 32; i++) {
        rev = (rev << 1) | (n & 1);
        n >>= 1;
    }
    return rev;
}

int main() {
    int n = 43261596; // binary: 00000010100101000001111010011100
    int result = reverseBits(n);
    printf("Reversed bits: %u\n", result); // Output: 964176192
    return 0;
}
