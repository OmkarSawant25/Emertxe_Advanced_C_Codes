#include <stdio.h>

int main()
{
    static int n;
    static int fact = 1;
    if(n == 0 && fact == 1)
    {
        printf("Enter the number : ");
        scanf("%d",&n);
    }
    if(n < 0)
    {
        printf("Invalid\n");
        return 0;
    }
    if(n == 0)
    {
        printf("Fact is %d : ", fact);
        return 1;
    }

    return 0;
}
