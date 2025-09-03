#include <stdio.h>

int main(){
    float kmh, ms ;
    printf("entrer la vitesse en km/h:");
    scanf("%f",&kmh);
    ms = kmh *0.27778 ;
    printf("%f km/h = %.2f m/s",kmh,ms);
    return 0;
}