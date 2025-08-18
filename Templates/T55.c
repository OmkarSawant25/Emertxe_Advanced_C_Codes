/*WAP to find the sum of n natural numbers using recursive function
Eg: Enter the number : 10
    Sum of 1st 10 numbers is 55*/
    
#include <stdio.h>
int sumofnatural(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int sum = sumofnatural(num);
    printf("Sum of 1st %d numbers is %d\n", num, sum);
}
int sumofnatural(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sumofnatural(n - 1);
}
