#include <stdio.h>

int numJewelsInStones(char *jewels, char *stones)
{
    int count = 0;
    int i = 0;
    while (stones[i] != '\0')
    {
        int j = 0;
        while (jewels[j] != '\0')
        {
            if (stones[i] == jewels[j])
                count++;
            j++;
        }
        i++;
    }
    return count;
}

int main()
{
    char jewels[] = "aA";
    char stones[] = "aAAbbbb";

    int result = numJewelsInStones(jewels, stones);
    printf("Number of jewels in stones: %d\n", result);

    return 0;
}
