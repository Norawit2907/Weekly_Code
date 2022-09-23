#include<stdio.h>

int num[110][110];

int main()
{
    int n;
    scanf("%d", &n);
    int m = (n*((n*n)+1)) / 2;
    //printf("%d\n",m);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 1; j <= n; j++)
        {
            sum += num[i][j];
        }
        if(sum != m)
        {
            printf("NO");
            return 0;
        }
    }

    for(int j = 1; j <= n; j++)
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            sum += num[i][j];
        }
         if(sum != m)
        {
            printf("NO");
            return 0;
        }
    }

    int sum = 0;
    for(int i = 1, j = 1; i <= n; i++, j++)
    {
        sum += num[i][j];
    }
    if(sum != m)
    {
        printf("NO");
            return 0;

    }

    sum = 0;
    for(int i = n, j = 1; j <= n; i--, j++)
    {
        sum += num[i][j];
    }
    if(sum != m)
    {
        printf("NO");
            return 0;

    }

    printf("YES");

}

/*
2 7 6
9 5 1
4 3 8

8 1 5
3 6 7
4 9 2

  */