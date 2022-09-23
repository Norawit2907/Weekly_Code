#include<stdio.h>

int num[110][110];

int sumrow(int i, int j,int n)
{
    int sum = 0;
    if(j < n)   { sum += num[i][j] + sumrow(i, j+1, n);}
    if(j == n)  {  return num[i][j];}

    return sum;
}

int sumcolumn(int i, int j, int n)
{
    int sum = 0;
    if(i < n) { sum += num[i][j] + sumcolumn(i+1, j, n);}
    if(i == n) { return num[i][j];}
    return sum;
}

int sumleftdown(int i, int j, int n)
{
    int sum = 0;
    if(i < n && j < n) { sum += num[i][j] + sumleftdown(i+1, j+1, n);}
    if(i == n && j == n) { return num[i][j];}
    return sum;
}

int sumleftup(int i, int j)
{
    int sum = 0;
    if(i > 1 && j > 1) { sum += num[i][j] + sumleftup(i-1, j-1);}
    if(i == 1 && j == 1) {return num[i][j];}
    return sum;
}

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

    int temp;
    for(int i = 1, j = 1; i <= n; i++)
    {
        temp = sumrow(i, j, n);
        if(temp != m)
        {
            printf("NO");
            return 0;
        }
        
    }
    for(int i = 1, j = 1; j <= n; j++)
    {
        temp = sumcolumn(i, j, n);
        if(temp != m)
        {
            printf("NO");
            return 0;
        }
    }
    temp = sumleftdown(1, 1, n);
    if(temp != m)
        {
            printf("NO");
            return 0;
        }
    
    temp = sumleftup(n, n);
    if(temp != m)
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