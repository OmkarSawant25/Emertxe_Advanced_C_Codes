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
