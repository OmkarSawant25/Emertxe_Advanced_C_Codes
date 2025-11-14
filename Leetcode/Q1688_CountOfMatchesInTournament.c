#include <stdio.h>

int numberOfMatches(int n);

int main()
{
    int n;

    printf("Enter number of teams: ");
    scanf("%d", &n);

    int result = numberOfMatches(n);

    printf("Total number of matches = %d\n", result);

    return 0;
}

// int numberOfMatches(int n){
//     int total = 0;
//     while(n > 1)
//     {
//         if(n % 2 == 0)
//         {
//             total += n/2;
//             n = n/2;
//         }
//         else
//         {
//             total += (n-1)/2;
//             n = (n-1)/2 + 1;
//         }
//     }
//     return total;
// }

int numberOfMatches(int n){
    return n - 1;
}
