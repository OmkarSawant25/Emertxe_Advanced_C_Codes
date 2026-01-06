#include <stdio.h>
#include <string.h>
int convertTo24Hour(int hh, char mer[])
{
    if (strcmp(mer, "AM") == 0 && hh == 12)
        return 0;
    if (strcmp(mer, "PM") == 0 && hh != 12)
        return hh + 12;
    return hh;
}
int main()
{
    char time[11], mer[3];
    int hh, mm, ss;
    scanf("%s", time);
    sscanf(time, "%2d:%2d:%2d%2s", &hh, &mm, &ss, mer);
    hh = convertTo24Hour(hh, mer);
    printf("%02d:%02d:%02d\n", hh, mm, ss);
}