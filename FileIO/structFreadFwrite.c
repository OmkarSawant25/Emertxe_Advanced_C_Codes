#include <stdio.h>
#include <stdlib.h>

struct Data
{
    int num1;
    char oper;
    int num2;
    char str[10];
    float num3;
};

int main()
{
    struct Data d1 = {2, '+', 1, "is", 1.1};  // sample data
    struct Data d2;                           // to read back

    FILE *fptr = fopen("struct.bin", "wb+"); // open binary file
    if (fptr == NULL)
    {
        fprintf(stderr, "Error opening file!\n");
        return 1;
    }

    // Write the structure in binary
    fwrite(&d1, sizeof(struct Data), 1, fptr);

    // Move back to start
    rewind(fptr);

    // Read the structure from binary file
    fread(&d2, sizeof(struct Data), 1, fptr);

    // Print to verify
    printf("%d %c %d %s %f\n", d2.num1, d2.oper, d2.num2, d2.str, d2.num3);

    fclose(fptr);
    return 0;
}
