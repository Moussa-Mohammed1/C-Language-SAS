#include <stdio.h>
#include <math.h>
int main(){
    float length, width;
    float surface;
    printf("entrer la largeur:");
    scanf("%f",&width);
    printf("entrer la longeur:");
    scanf("%f",&length);
    surface = length * width;
    printf("la surface du rectange est : %.3f",surface);
    return 0;
    
}