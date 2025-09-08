#include <stdio.h>
#include <stdbool.h>

bool canWinNim(int n) {
    // if (n == 1 || n == 2 || n == 3) 
    //     return true;
    // else if (n % 4 == 0) 
    //     return false;
    // return true;  
    return (n % 4 != 0);
}

int main() {
    int n;
    printf("Enter number of stones: ");
    scanf("%d", &n);

    if (canWinNim(n))
        printf("You can win the game!\n");
    else
        printf("You will lose the game.\n");

    return 0;
}
