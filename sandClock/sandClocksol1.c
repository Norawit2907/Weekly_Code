#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mid = (n*2-1)/2 + 1;
    for(int i = 1; i <= 2*n-1; i++)
    {
        for(int j = 1; j <= 2*n-1; j++)
        {   
            if( i <= mid)
            {
                if (i > j)
                {
                    printf(" ");
                }
                else if(j >= 2*n-(i-1))
                {
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            else if( i > mid)
            {
                if(j <= mid - (i-mid+1))
                {
                    printf(" ");
                }
                else if(j > mid + (i - mid))
                {
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}