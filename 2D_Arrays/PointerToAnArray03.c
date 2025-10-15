#include <stdio.h>
#include <stdlib.h>

int main() {
    int (*p)[3];  // pointer to an array of 3 ints

    // Allocate memory for 3 arrays of 3 ints each
    p = (int (*)[])malloc(sizeof(*p) * 3);  

    // Assign values
    (*(p + 0))[0] = 1;  // 1st row, 1st column
    (*(p + 1))[1] = 2;  // 2nd row, 2nd column
    (*(p + 2))[2] = 3;  // 3rd row, 3rd column

    // Print values
    printf("%d\n", p[0][0]);
    printf("%d\n", p[1][1]);
    printf("%d\n", p[2][2]);

    free(p);  // free allocated memory
    return 0;
}


/*
1️⃣ Pointer to an Array
int (*p)[3];
p is a pointer to an array of 3 integers.
This is different from int *p, which points to a single integer.
Here, p points to a whole row (3 ints).

2️⃣ Dynamic Memory Allocation
p = malloc(sizeof(*p) * 3);
*p → dereferencing p gives one row (array of 3 ints).
sizeof(*p) → size of one row = 3 × sizeof(int).
Multiply by 3 → allocate 3 rows dynamically.
Now p behaves like a 3×3 2D array:

Row 0: p[0][0] p[0][1] p[0][2]
Row 1: p[1][0] p[1][1] p[1][2]
Row 2: p[2][0] p[2][1] p[2][2]

3️⃣ Accessing Elements
(*(p + 0))[0] = 1; // 1st row, 1st column
(*(p + 1))[1] = 2; // 2nd row, 2nd column
(*(p + 2))[2] = 3; // 3rd row, 3rd column

p + i → pointer to i-th row
*(p + i) → the row array itself
(*(p + i))[j] → j-th element in the i-th row

✅ Equivalent to normal 2D array syntax:
p[i][j] = value;

4️⃣ Why This Concept is Useful
Dynamic 2D Arrays: You can allocate rows at runtime instead of hardcoding sizes.
Pointer Arithmetic: Moving p + 1 jumps one entire row, not just one element.
Function Passing: You can pass int (*p)[3] to a function, and it still knows the row size.

🔹 Example: Function Usage
void print_2D(int (*p)[3], int rows) {
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < 3; j++)
            printf("%d ", p[i][j]);
}

Works perfectly with dynamically allocated 2D arrays.
You don’t lose row size information (unlike int **p sometimes).
----------------------------------------------------------------------------------------------
🔹 Summary
----------------------------------------------------------------------------------------------
    Concept	            Normal Pointer	    Pointer to Array
    Declaration	        int *p	            int (*p)[3]
    Points to	        1 element	        Entire row
    Arithmetic(p + 1)	moves 1 element	    moves 1 row
    Useful for	        1D arrays	        Dynamic 2D arrays, functions with fixed row size

*/