#include <stdio.h>

int search(int* nums, int numsSize, int target)
{
    int index = -1;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == target)
        {
            index = i;
                break;
        }
    }
    return index;
}

int main() {
    int nums[100], n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    int index = search(nums, n, target);

    if (index != -1)
        printf("Target %d found at index %d\n", target, index);
    else
        printf("Target %d not found in array\n", target);

    return 0;
}


/*--------------------------------------------------------------------*/
// int search(int* nums, int numsSize, int target) {
//     int left=0,right,mid;
//     right=numsSize-1;
//     while(left<=right)
//     {
//         mid=(left+right)/2;
//         if(nums[mid]==target)
//           return mid;
//         else if(nums[mid]>target)
//             right=mid-1;
//         else
//              left=mid+1;    
//     }
//     return -1;
// }