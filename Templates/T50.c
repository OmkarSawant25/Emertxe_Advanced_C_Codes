/*WAP to print the value of the number using pointer*/

#include <stdio.h>
void print(int *);
int main()
{
    int num;
    int *ptr = &num;
    printf("Enter the value of num : ");
    scanf("%d", &num);
    print(ptr);
    return 0;
}
void print(int *a)
{
    printf("Value is %d\n", *a);
}