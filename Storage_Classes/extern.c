#include <stdio.h>
int x = 20;
int main()
{
    int x; // (1) Local variable (uninitialized)
    {
        int x = 10; // (2) Inner block variable
        {
            extern int x; // (3) Refers to *global* x (defined later)
            printf("x %d\n", x);
        }
        printf("x %d\n", x);
    }
    printf("x %d\n", x);
    return 0;
}
int x; // (4) Global variable (definition)
