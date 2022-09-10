#include<stdio.h>

int main()
{
    FILE *tofile, *fromfile;
    fromfile = fopen("data1.txt", "r");
    tofile = fopen("data2.txt", "w");

    if(fromfile == NULL || tofile == NULL)
    {
        printf("Error Could not open file\n");
        return 1;
    }

    char word[255];
    while(  fscanf(fromfile, "%s", word) != EOF)
    {
        fprintf(tofile, "%s ", word);
    }
    fclose(tofile);
    fclose(fromfile);

}