#include <stdio.h>

// extern int num;   // refers to an external variable (external linkage)
                     // note: previous declaration of ‘num’ with type ‘int’
// static int num;   // error : static declaration of ‘num’ follows non-static declaration
                     // file-local variable (internal linkage)

static int num;   // file-local variable (internal linkage)
extern int num;   // refers to an external variable (external linkage)

int func_1()
{
    printf("num is %d from file2\n", num);
    return 0;
}
