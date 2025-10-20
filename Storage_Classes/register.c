#include <stdio.h>
int main()
{
    register int i = 0;   // 'register' suggests storing 'i' in a CPU register for faster access
    // scanf("%d", &i);      // reads an integer from the user and stores it in 'i' & it is unsafe
    printf("i %d\n", i);  // prints the value of 'i'
}