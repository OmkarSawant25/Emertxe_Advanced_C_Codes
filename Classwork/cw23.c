/* Write a program to swap two numbers */
#include <stdio.h>
void swap(int *, int *);
void display(int, int);

int main()
{
    int num1, num2;
    printf("Enter the number1 : ");
    scanf("%d", &num1);
    printf("Enter the number2 : ");
    scanf("%d", &num2);
    printf("Before swap : \n");
    display(num1, num2);
    swap(&num1, &num2);
    printf("After swap : \n");
    display(num1, num2);
    return 0;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int a, int b)
{
    printf("num1 is %d\n", a);
    printf("num2 is %d\n", b);
}