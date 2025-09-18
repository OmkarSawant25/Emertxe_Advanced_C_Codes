#include <stdio.h>

int main()
{
    int num1, num2;
    float num3;
    char str[10], oper;
    FILE *fptr;

    if ((fptr = fopen("text.txt", "w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    }

    // Write formatted data into file
    fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);

    // Move file pointer back to beginning
    rewind(fptr);

    // Read formatted data from file
    fscanf(fptr, "%d %c %d %s %f", &num1, &oper, &num2, str, &num3);

    // Print the values read
    printf("%d %c %d %s %f\n", num1, oper, num2, str, num3);

    fclose(fptr);
    return 0;
}
