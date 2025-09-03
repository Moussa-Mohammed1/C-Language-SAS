#include <stdio.h>

int main(){
    float km, yards;
    printf("entrer la distance en kilometres:");
    scanf("%f",&km);
    yards = km * 1093.61;
    printf("%f kilometres = %.2f yards",km,yards);
    return 0;
}