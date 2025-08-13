/* Modify the value*/

#include <stdio.h>
void modify(int *);

int main()
{
    int num;
    // printf("Enter the number : ");
    scanf("%d",&num);
    modify(&num);
    printf("After modifying, num is %d\n",num);
    return 0;
}

void modify(int *a)
{
    *a = *a + 5;
}