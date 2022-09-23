#include<stdio.h>

int num[20];
int main()
{
    int n, m, temp;
    scanf("%d %d", &m, &n);
    
    for(int i = 0; i < m * n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < m * n; i++)
    {
        scanf("%d", &temp);
        num[i] += temp;
    }
    for(int i = 0; i < m * n; i++)
    {
        printf("%d ", num[i]);
        if(i % 3 == 2)
            printf("\n");
    }

}