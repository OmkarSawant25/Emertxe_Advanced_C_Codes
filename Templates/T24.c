#include <stdio.h>

int main()
{
    int a;
    printf("Enter max lines: ");
    scanf("%d",&a);
    
    for(int i = 1 ; i <= a ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
