#include<stdio.h>

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
    
    int a = 0, num, b = 0;
    char c;

    int nextnum = 0;

     while((c = fgetc(fromfile)) != EOF) // loop each character
    {   
        num = c - '0'; // convert string to int;
        if(c == ' ')
        {
            nextnum = 1;
            num = 0;
        }
        else if(nextnum == 0)
        {
            a = a*10 + num;
            //printf(" a : %d ", a);
        } 
        else if(nextnum == 1)
        {
            b = b*10 + num;
            //printf(" b : %d ", b);
            
        }
        //printf("%c",c);
    }

    char text[255];
    
   
    sprintf(text, "%d", a + b);
    fclose(fromfile);
    fclose(tofile);

    return 0;
}