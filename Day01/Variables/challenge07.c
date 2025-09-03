#include <stdio.h>
int main(){
    float a,b,c, moyenne;
    printf("entrer a:");
    scanf("%f",&a);
    printf("entrer b:");
    scanf("%f",&b);
    printf("entrer c:");
    scanf("%f",&c);
    moyenne = (a * 2)+(b * 3)+(c * 5)/(2 + 3 + 5);
    printf("la moyenne ponderee de ces trois nombre est : %.2f",moyenne);
    return 0;

}