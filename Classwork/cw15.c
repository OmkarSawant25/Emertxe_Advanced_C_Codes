/* Write a function to calculate square a number */

#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Square is %d\n", square(num));
}
int square(int a)
{
    return (a * a);
}