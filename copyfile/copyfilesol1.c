#include<stdio.h>

int main()
{
    FILE *fromfile, *tofile;
    fromfile = fopen("data1.txt", "r");
    tofile = fopen("data2.txt", "w");

    if(fromfile == NULL || tofile == NULL)
    {
        printf("Error Could not open file\n");
        return 1;
    }

    char c;
    while ((c = fgetc(fromfile)) != EOF)
    {
        fputc(c, tofile);
    }
    
    fclose(fromfile);
    fclose(tofile);

    return 0;

}