#include<stdio.h>

int main(){
    int a, b, c, mx = -2e9;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= mx){
        mx = a;
    }
    if(b >= mx){
        mx = b;
    }
    if(c >= mx){
        mx = c;
    }
    printf("%d", mx);

}