#include<stdio.h>
#include<string.h>


int main()
{
    FILE *tofile, *fromfile;
    fromfile = fopen("a.txt", "r");
    tofile = fopen("b.txt", "w");

    if(fromfile == NULL || tofile == NULL)
    {
        printf("Error Could not open file\n");
        return 1;
    }
    char buffer[255];
    fgets(buffer, 255, fromfile); // read one line in string from "a.txt"
    
    int size = strlen(buffer);
    int num = 0;
    int a, c = 0;
    while( c != size) // loop each character
    {        
        if(buffer[c] != ' ')
        {
            num = (num * 10) + (buffer[c] - '0');
            
        }
        else
        {
            a = num;
            num = 0;
        }
        c++;
    }
    int b = a+num;
    char text[255];

    sprintf(text, "%d", a + num);
    fprintf(tofile, text);

    fclose(fromfile);
    fclose(tofile);

    return 0;
    
}