#include <stdio.h>

int main()
{
    int num1, num2;
    FILE *fptr;

    if ((fptr = fopen("text.txt", "w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    }

    // Input 2 integers from user
    scanf("%d%d", &num1, &num2);

    // Write them in binary form to file
    fwrite(&num1, sizeof(num1), 1, fptr);
    fwrite(&num2, sizeof(num2), 1, fptr);

    // Move file pointer back to start
    rewind(fptr);

    // Read them back from the file
    fread(&num1, sizeof(num1), 1, fptr);
    fread(&num2, sizeof(num2), 1, fptr);

    // Print to console
    printf("%d %d\n", num1, num2);

    fclose(fptr);
    return 0;
}
