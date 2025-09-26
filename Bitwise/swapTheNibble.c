#include <stdio.h>

int main()
{
    unsigned char num = 0xAB;
    // unsigned char op1 = num >> 4;
    unsigned char op1 = num >> 4;
    // printf("%#x\n",op1);
    // unsigned char op2 = (num & ((1 << 4) - 1)) << 4;
    // unsigned char op2 = num << 4;
    unsigned char op2 = num << 4;

    // printf("%#x\n",op2);
    printf("%#X\n", num);

    // char res = ((unsigned) (num >> 4)) | num << 4;
    printf("%#X", (unsigned)(op1 | op2));  // Char + char = integer

    return 0;
}
