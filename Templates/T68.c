/*
T68 - Practice signed and unsigned right shift.

WAP to perform signed and unsigned right shift on the given number.
Declare a signed variable and read the number to it . Declare an unsigned variable and read the number to it . Perform the right shift for required number of times.

Eg:
Enter the number for signed variable : -56
Enter the number of shifts to be performed : 5
After performing signed right shift : -2
Enter the number for unsigned number : -56
Enter the number of shifts to be performed : 5
After performing unsigned right shift : 134217726

Note: Entering a negative number to a unsigned variable will not cause any error but not suggested to do it. Here, as we have to know the difference in the operation, we are doing this.
*/
#include <stdio.h>

int main()
{
    int snum, usnum, sn, usn;
    printf("Enter the number for signed variable : ");
    scanf("%d", &snum);
    printf("Enter the number of shifts to be performed :");
    scanf("%d", &sn);
    printf("After performing signed right shift : %d\n", snum >> sn);
    printf("Enter the number for unsigned variable : ");
    scanf("%d", &usnum);
    printf("Enter the number of shifts to be performed :");
    scanf("%d", &usn);
    printf("After performing unsigned right shift : %d\n", (unsigned)usnum >> usn);
}