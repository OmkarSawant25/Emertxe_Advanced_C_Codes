#include <stdio.h>

int main()
{
    int num1,num2,largest;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    
    if(num1>num2)
    {
        largest = num1;
    }
    else
    {
        largest = num2;
    }
    printf("Largest is %d",largest);
}
