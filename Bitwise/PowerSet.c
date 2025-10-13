#include <stdio.h>
#include <string.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int num[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &num[i]);

    int total = 1 << size;    // total subsets = 2^size
    char subsets[total][100]; // to store all subset strings

    for (int i = 0; i < total; i++)
    {
        strcpy(subsets[i], "{ "); // start with opening brace
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j))
            {
                char temp[10];
                sprintf(temp, "%d ", num[j]);
                strcat(subsets[i], temp);
            }
        }
        strcat(subsets[i], "}"); // closing brace
    }

    printf("\nSubsets:\n");
    for (int i = 0; i < total; i++)
        printf("%s\n", subsets[i]);

    return 0;
}
