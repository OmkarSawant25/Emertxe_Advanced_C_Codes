#include <stdio.h>
#include <unistd.h>   // for sleep()

int func_1(void);  // function declaration (prototype)
int num;   // global definition (definition)
int main()
{
    while (1)
    {
        num++;        // modifies global variable
        func_1();     // function from another file
        sleep(1);
    }
    return 0;
}
