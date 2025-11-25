#include <stdio.h>
#include <string.h>

void delete_duplicate_passport_numbers(char arr[][20], int n); // Function prototype

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][20];

    for (int i = 0; i < n; ++i)
        scanf("%s", arr[i]);

    delete_duplicate_passport_numbers(arr, n);

    return 0;
}

void delete_duplicate_passport_numbers(char arr[][20], int n)
{
    char unique[n][20];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(int j = 0; j < k; j++)
        {
            if(strcmp(arr[i],unique[j]) == 0)
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate == 0)
        {
            strcpy(unique[k],arr[i]);
            k++;
        }
    }
    for(int i = 0; i < k; i++)
    {
        printf("%s ",unique[i]);
    }
}

// For input:

// 4
// P25
// A25
// C25
// P25


// Output:

// P25 A25 C25