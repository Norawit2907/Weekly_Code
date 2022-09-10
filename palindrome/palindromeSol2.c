#include<stdio.h>
#include<string.h>
#include<ctype.h>

char sen[110];
char cen[110];

int main()
{
    int c = 0;
    int check = 0;
    scanf("%[^\n]s", sen);
    int size = strlen(sen);
    for(int i = 0; i <= size; i++)
    {
        if((sen[i] >= 'a' && sen[i] <= 'z') || (sen[i] >= 'A' && sen[i] <= 'Z'))
        {
            sen[i] = tolower(sen[i]);
            cen[c] = sen[i];
            
            c++;
            
        }
    }
    size = strlen(cen) - 1;
    for(int i = 0; i <= size/2 ; i++)
    {
        if(cen[i] != cen[size - i])
        {
            printf("%c %c\n",cen[i] ,cen[size-i]);
            check++;
        }
    }
    if(check != 0)
    {
        printf("Not a Palindrome");
    }
    else
    {
        printf("Is a Palindrome");
    }

}