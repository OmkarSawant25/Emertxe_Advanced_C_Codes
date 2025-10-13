#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d", &size);
    int num[size];
    printf("Enter the elements in array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
    int subset = (1 << size);

    for (int i = 0; i < subset; i++)
    {
        printf("{");
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j))
            {
                printf("%d", num[j]);
            }
        }
        printf("} ");
    }

    return 0;
}
