#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(28);
    // free(ptr);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}
