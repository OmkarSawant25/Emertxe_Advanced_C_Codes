#include <stdio.h>
#include <stdbool.h>   // needed for bool, true, false
#include <math.h>

bool checkPerfectNumber(int num);  // function prototype

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkPerfectNumber(num))
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is NOT a Perfect Number\n", num);

    return 0;
}
bool checkPerfectNumber(int num) {
    if (num <= 1)
        return false;
    int sum = 1;
    int sqrtN = sqrt(num);
    for (int i = 2; i <= sqrtN; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i)
                sum += num / i;
        }
    }
    return sum == num;
}