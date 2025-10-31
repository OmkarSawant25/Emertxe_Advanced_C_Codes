#include <stdio.h>
#include <string.h>

void print(int i, int *b, int *a, int n, int idx)
{
    if (i == n)
    {
        printf("{ ");
        for (int j = 0; j < idx; j++)
        {
            printf("%d ", b[j]);
        }
        printf("}\n");
        return;
    }
    print(i + 1, b, a, n, idx);

    b[idx] = a[i];
    print(i + 1, b, a, n, idx + 1);
    // print(i + 1, b, a, n, idx);
}

int main()
{
    int a[] = {3, 1, 2};
    int b[30];  
    print(0, b, a, 3, 0);
}
