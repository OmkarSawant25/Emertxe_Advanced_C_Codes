#include <stdio.h>

void encode(char **);
int main(int argc, char *argv[])
{
    if(argv[2][0] == 'e')
    {
        encode(argv);
    }
}

void encode(char *file[])
{
    FILE *fptr_Sec = fopen(file[3], "rb");
    FILE *fptr_Input = fopen(file[1], "rb");
    FILE *fptr_Out = fopen("output.bmp", "wb");

    unsigned char header[54];

    fread(header, sizeof(unsigned char), 54, fptr_Input);
    fwrite(header, sizeof(unsigned char), 54, fptr_Out);

    unsigned char secret;
    unsigned char output;
    unsigned char input;

    while(fread(&secret, sizeof(unsigned char), 1, fptr_Sec) == 1)
    {
        for(int i = 0; i < 8; i++)
        {
            fread(&input,1,1,fptr_Input);
            output = (input & ~1) | ((secret >> i) & 1);
            fwrite(&output,sizeof(unsigned char),1, fptr_Out);
        }
    }
    while(fread(&input, sizeof(unsigned char),1,fptr_Input) == 1)
    {
        fwrite(&input, sizeof(unsigned char), 1, fptr_Out);
    }
    printf("Encoded Succesfully!");

    fclose(fptr_Input);
    fclose(fptr_Out); 
    fclose(fptr_Sec); 
}