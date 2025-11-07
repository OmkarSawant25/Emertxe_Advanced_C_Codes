#include <stdio.h>
#include <limits.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = INT_MIN;
    for(int i = 0; i < accountsSize; i++) {
        int sum = 0;
        for(int j = 0; j < accountsColSize[i]; j++) {
            sum += accounts[i][j];
        }
        if(sum > max)
            max = sum;
    }
    return max;
}

int main() {
    int customer1[] = {1, 2, 3};
    int customer2[] = {3, 2, 1};
    int customer3[] = {4, 5, 6};
    
    int* accounts[] = {customer1, customer2, customer3};
    int accountsColSize[] = {3, 3, 3};
    int accountsSize = 3;
    
    int richest = maximumWealth(accounts, accountsSize, accountsColSize);
    printf("Richest Customer Wealth = %d\n", richest);
    
    return 0;
}
