#include<stdio.h>
int mat1[10][10];
int mat2[10][10];

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
           printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
/*
3 3 
1 2 3 
3 2 1 
1 3 2 
1 1 1 
1 1 1 
1 1 1

2 3 4 
4 3 2 
2 4 3 
*/
    
}
