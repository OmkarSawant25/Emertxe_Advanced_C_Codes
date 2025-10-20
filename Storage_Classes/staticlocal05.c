#include <stdio.h>

int foo()
{
    static int i;
    return i;
}

int main()
{
    // static int d = foo();  // ❌ function call is NOT a constant expression
    return 0;
}
