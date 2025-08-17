/*Find factorial of a number (The based-on activity was missed by restoring/importing. Please, include "")*/

#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int res = fact(num);
    printf("Factorial of %d is %d\n", num, res);
    return 0;
}
int fact(int a)
{
    if (a == 1 || a == 0)
        return 1;
    else
        return a * fact(a - 1);
}