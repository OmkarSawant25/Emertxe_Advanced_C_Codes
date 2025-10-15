#include <stdio.h>
#include <stdlib.h>

int main() {
    int (*p)[3]; // pointer to array of 3 ints (row)
    p = malloc(sizeof(*p) * 3); // 3 rows

    // Assign values
    p[0][0] = 1;
    p[1][1] = 2;
    p[2][2] = 3;

    // Print values
    printf("%d %d %d\n", p[0][0], p[1][1], p[2][2]);

    free(p);
    return 0;
}

/*
🔹 How It Works

p = arr;
The 2D array decays into a pointer to its first row.
First row = arr[0] (an array of 4 ints).

p[i][j]
p + i → move to i-th row
p[i] → pointer to the i-th row
p[i][j] → j-th element in i-th row

Pointer arithmetic:
p + 1 → jumps one whole row (4 ints), not just one int.

🔹 Key Points

    Use int (*p)[cols] when working with 2D arrays.
    Makes dynamic 2D array allocation easier.
    p[i][j] works exactly like a normal 2D array.
    Pointer moves row by row, element access works column by column.*/