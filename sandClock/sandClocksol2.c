#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int k = i; k > 1; k--)
        {
            printf(" ");
        }
        for(int j = 2*n-(2*i-1); j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i <= n-1; i++)
    {
        for(int k = 1; k <= n-i-1 ; k++)
        {
            printf(" ");
        }
        for(int j = 1; j <= 2*(i+1)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }    
}