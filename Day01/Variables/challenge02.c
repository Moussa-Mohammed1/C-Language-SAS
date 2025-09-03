#include <stdlib.h>
#include <stdio.h>

int main(){
    float C,K;
    printf("entre la temperature en celsius:");
    scanf("%f",&C);
    K = C + 273.15;
    printf("la temperature en Kelvin est: %.2f",K);
    return 0;
}