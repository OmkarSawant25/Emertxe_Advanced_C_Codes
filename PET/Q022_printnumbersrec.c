#include <stdio.h>

void printnumbers(int n);   // Function prototype

int main()
{
    int n;
    scanf("%d", &n);

    printnumbers(n);

    return 0;
}
void printnumbers(int n)
{
    if(n == -1)
        return;
    printnumbers(n-1);
    printf("%d ",n);
}
