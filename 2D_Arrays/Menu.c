#include <stdio.h>
void printMenu(char **menu)
{
    for(int i = 0; i < 5; i++)
        printf("%d. %s\n", i+1, menu[i]);
}
int main()
{
    char *menu[] = {"File", "Edit", "View","Insert","Help"};
    int choice;

    printMenu(menu);

    printf("Select your choice : ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <=5)
    {
        printf("You have selected %s Menu\n", menu[choice - 1]);
    }
    else
    {
        printf("Invalid Option\n");
    }

}