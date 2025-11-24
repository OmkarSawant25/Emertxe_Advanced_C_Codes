#include <stdio.h>

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int size = nums1Size + nums2Size;
    int ans[size];
    int z = 0;
    int i = 0;
    int j = 0;
    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] < nums2[j])
        {
            ans[z++] = nums1[i++];
        }
        else
        {
            ans[z++] = nums2[j++];
        }
    }
    while (i < nums1Size)
        ans[z++] = nums1[i++];

    while (j < nums2Size)
        ans[z++] = nums2[j++];

    if (size % 2 == 0)
    {
        return (double)(ans[size / 2] + ans[(size - 1) / 2]) / 2;
    }
    return ans[size / 2];
}
int main()
{
    int nums1[] = {1, 3};
    int nums2[] = {2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    double median = findMedianSortedArrays(nums1, size1, nums2, size2);
    printf("Median: %lf\n", median);

    return 0;
}
