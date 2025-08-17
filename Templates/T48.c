/*Change the value of the variable*/
#include <stdio.h>
void modify(float *);
int main()
{
    float age;
    printf("Enter the age : ");
    scanf("%f", &age);
    modify(&age);
    printf("Age after increasing by 20 is %g\n", age);
    return 0;
}
void modify(float *age)
{
    *age = 20 + *age;
}