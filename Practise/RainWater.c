#include <stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}
int min(int a, int b){
    return (a < b) ? a : b;
}
int trap(int *height, int heightSize){
    int leftMax[heightSize];
    int rightMax[heightSize];
    int minLR, lmax = 0, rmax = 0, cnt = 0;
    for (int i = 0; i < heightSize; i++){
        lmax = max(height[i], lmax);
        leftMax[i] = lmax;
    }
    for (int i = heightSize - 1; i >= 0; i--){
        rmax = max(height[i], rmax);
        rightMax[i] = rmax;
    }
    for (int i = 0; i < heightSize; i++){
        minLR = min(leftMax[i],rightMax[i]);
        cnt += (minLR - height[i]);
    }
    return cnt;
}

int main()
{
    int height[] = {4, 2, 0, 3, 2, 5};
    int size = sizeof(height) / sizeof(height[0]);

    printf("Trapped water = %d\n", trap(height, size));
    return 0;
}
