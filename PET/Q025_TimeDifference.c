#include <stdio.h>
#include <stdlib.h>
int toSeconds(int h, int m, int s)
{
    int res = (h * 60 * 60) + (m * 60) + s;
    return res;
}
int main()
{
    char t1[9], t2[9];
    int h1, m1, s1, h2, m2, s2;
    scanf("%s %s", t1, t2);
    sscanf(t1, "%d:%d:%d", &h1, &m1, &s1);
    sscanf(t2, "%d:%d:%d", &h2, &m2, &s2);
    int diff = abs(toSeconds(h1, m1, s1) - toSeconds(h2, m2, s2));
    printf("%02d:%02d:%02d\n", diff / 3600, (diff % 3600) / 60, diff % 60);
}

// 10:20:30 12:45:15