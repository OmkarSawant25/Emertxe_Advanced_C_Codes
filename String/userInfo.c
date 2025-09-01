// ● WAP to print user information –
// – Read : Name, Age, ID, Mobile number
// – Print the information on monitor
// – Print error “Invalid Mobile Number” if length of mobile
// number is not 10

#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    char age[3];
    char ID[5];
    char Mobile[10];

    printf("Enter Name : ");
    scanf("%s", a);
    printf("Enter Age : ");
    scanf("%s", age);
    printf("Enter ID : ");
    scanf("%s", ID);
    printf("Enter Mobile Number : ");
    scanf("%s", Mobile);
    if(strlen(Mobile) != 10)
    {
        printf("Invalid Mobile Number\n");
        return 0;
    }
    printf("\n----- Username Information -----------\n");
    printf("Name : %s\n", a);
    printf("Age : %s\n", age);
    printf("ID : %s\n", ID);
    printf("Mobile Number : %s\n", Mobile);

    return 0;
}