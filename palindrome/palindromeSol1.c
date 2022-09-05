#include<stdio.h>
#include<string.h>
#include<ctype.h>

char s[110];
char sen[110];
char revsen[110];
int main(){
    int c = 0;
    scanf(" %[^\n]s", &s);
    int size = strlen(s);
    for(int i = 0; i < size; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s[i] = tolower(s[i]);
            sen[c] = s[i];
            c++;
            
        }
    }
    c = 0;
    int sizeSen = strlen(sen);
    for(int i = sizeSen-1; i >= 0; i--)
    {
        revsen[c] = sen[i];
        c++;
    }

    int check = 0;
    for(int i = 0; i <= sizeSen-1; i++)
    {
        printf("%c %c\n",sen[i] ,revsen[i]);
        if(sen[i] != revsen[i])
        {
            check++;
        }
    }
    if(check != 0)
    {
        printf("Not a Palindrome");
    }
    else
    {
        printf("Is a palindrome");
    }

}