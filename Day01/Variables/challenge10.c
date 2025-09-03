#include <stdio.h>
#include <math.h>
int main(){
    double rayon, volume;
    const double pi= 3.141592653589793;
    printf("entrer le rayon de la sphere : ");
    scanf("%lf",&rayon);
    volume = (4.0/3.0) * pi * pow(rayon,3);
    printf("le volume de la sphere est: %.6f", volume);
    return 0;
}