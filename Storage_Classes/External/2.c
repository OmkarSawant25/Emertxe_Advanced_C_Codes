#include <stdio.h>

extern int num;   // declaration (not definition)
extern int num;   // repeated extern (allowed)

int func_1()
{
    printf("num is %d from file2\n", num);
    return 0;
}
