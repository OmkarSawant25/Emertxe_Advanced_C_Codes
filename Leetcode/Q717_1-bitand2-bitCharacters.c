#include <stdio.h>
#include <stdbool.h>

bool isOneBitCharacter(int *bits, int bitsSize)
{
    int count = 0;
    for (int i = bitsSize - 2; i >= 0 && (bits[i] == 1); i--)
    {
        count++;
    }
    return (count % 2 == 0);
}

int main()
{
    int bits1[] = {1, 0, 0};
    int size1 = sizeof(bits1) / sizeof(bits1[0]);

    int bits2[] = {1, 1, 1, 0};
    int size2 = sizeof(bits2) / sizeof(bits2[0]);

    printf("Test 1: %s\n", isOneBitCharacter(bits1, size1) ? "true" : "false");
    printf("Test 2: %s\n", isOneBitCharacter(bits2, size2) ? "true" : "false");

    return 0;
}
