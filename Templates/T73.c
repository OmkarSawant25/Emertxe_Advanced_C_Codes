/*
WAP to swap two numbers of any datatype using a single function

Eg : Before swapping num1 = 10, num2 = 20
After swapping num1 = 20, num2 = 10
Before swapping n1 = 10.5, n2 = 20.5
After swapping n1 = 20.5, n2 = 10.5
*/

#include <stdio.h>

#define SWAP(a,b,type) \
{ \
type temp = a; \
a = b; \
b = temp; \
}

int main()
{
    int num1 = 10, num2 = 20;
    printf("Before swapping num1 = %d, num2 = %d\n",num1,num2); 
    SWAP(num1, num2, int);
    printf("After swapping num1 = %d, num2 = %d\n",num1,num2);
    
    float n1 = 10.5, n2 = 20.5;
    printf("Before swapping n1 = %g, n2 = %g\n",n1,n2); 
    SWAP(n1, n2, float);
    printf("After swapping n1 = %g, n2 = %g\n",n1,n2);
    
}