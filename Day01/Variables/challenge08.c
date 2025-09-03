#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c, moyennegeom;
    printf("entrer a:");
    scanf("%lf",&a);
    printf("entrer b:");
    scanf("%lf",&b);
    printf("entrer c:");
    scanf("%lf",&c);
    moyennegeom = pow(a * b * c, 1.0/3.0);
    printf("la moyenne geometrique est : %lf", moyennegeom);
    return 0;

}