#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);

int main()
{
    int nums1[10] = {1, 3, 5, 0, 0, 0}; // nums1 has extra space for nums2
    int nums2[3] = {2, 4, 6};

    int m = 3; // number of valid elements in nums1
    int n = 3; // number of elements in nums2

    merge(nums1, 10, m, nums2, 3, n);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    for (int i = 0; i < nums2Size; i++)
    {
        nums1[i + m] = nums2[i];
    }
    for (int i = 0; i < m + n - 1; i++)
    {
        for (int j = 0; j < m + n - 1 - i; j++)
        {
            if (nums1[j] > nums1[j + 1])
            {
                int temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }
}
