#include<stdio.h>
#include<math.h>

int main(){
    float h, distance, startheight;
    float b = 0;
    scanf("%f", &h);
    distance = h;
    startheight = h;
    float tempheight;
    while(h >= 1){
        h *= 2;
        h /= 5;
        b++;
        
    }
    distance = startheight;
    for(int i = 1; i <= b; i++)
    {
        tempheight = startheight * 2;
        for(int j = 1; j <= i; j++)
        {
            tempheight = tempheight * 2/5;
        }
        //printf("%f ", tempheight);
        distance += tempheight; 
        
    }
    printf("Height = %.0f", startheight);
    printf("\nDistance = %.2f", distance);
    printf("\nBounce count = %.0f", b);
    
}