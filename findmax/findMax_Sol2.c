#include<stdio.h>

int num[13];

int main(){
    int a, b, c, mn = 2e9, temp;
    for(int i = 0; i <= 2; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i <= 2-1; i++){
        int mn = num[i], idx = i;
        for(int j = i; j <= 2; j++){
            if(num[j] <= mn){
                mn = num[j];
                idx = j;
            }
        }
        int temp = num[i];
        num[i] = mn;
        num[idx] = temp;
    }

  /*  for(int i = 0; i <= 2; i++){
        printf("%d ", num[i]);
    }
  */
    printf("%d", num[2]);  

}