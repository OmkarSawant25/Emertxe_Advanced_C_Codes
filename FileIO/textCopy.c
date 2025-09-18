#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1;
    FILE *fp2;

    fp1 = fopen("demo1.txt", "r");
    fp2 = fopen("demo2.txt", "w");

    int ch;
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);
}
// #include <stdio.h>

// int main() {
//     FILE *fp = fopen("demo1.txt", "r");
//     int ch;
    
//     while ((ch = fgetc(fp)) != EOF) {
//         printf("Read: %c (ASCII: %d)\n", ch, ch);
//     }

//     printf("End of file reached. ch = %d\n", ch);
//     fclose(fp);
//     return 0;
// }
