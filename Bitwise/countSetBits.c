#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int setCount = 0;

    for (int i = 31; i >= 0; i--)
    {
        // num & (1 << i) ? setCount++ : 0;
        if(num & (1 << i))
        {
            setCount++;
        }
    }
    printf("Set Bits are %d\n", setCount);

    return 0;
}
