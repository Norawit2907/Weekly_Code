#include<stdio.h>

int main(){
    int bounce = 0;
    float h;
    float distance = 0;
    scanf("%f", &h);
    int height = h;
    distance += h;
    while(h >= 1)
    {
       h *= 2;
       h /= 5;
       distance += h * 2;
       bounce++;
    }
    printf("Height : %d\nDistance : %.2f\nBounce : %d",height, distance, bounce);


    

}