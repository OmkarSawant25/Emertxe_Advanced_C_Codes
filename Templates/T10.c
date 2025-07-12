#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    if(x>=50 && x<=100)
    {
        printf("%d is in range",x);
    }
    else
    {
        printf("%d is not in range",x);
    }
}
