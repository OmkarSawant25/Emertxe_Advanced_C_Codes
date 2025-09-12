#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    for(int i = 0; i < nums1Size; i++)
    {
        
    }
}

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    double median = findMedianSortedArrays(nums1, size1, nums2, size2);
    printf("Median: %lf\n", median);

    return 0;
}
