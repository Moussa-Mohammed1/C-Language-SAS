#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,z1;
    float x2,y2,z2;
    float distance;
    printf("entrer les coordonnes du premier point (x y z):");
    scanf("%f %f %f", &x1,&y1,&z1);
    printf("entrer les coordonnes du deuxieme point(x y z):");
    scanf("%f %f %f", &x2,&y2,&z2);
    distance = sqrt(pow(x2-x1,2)+ pow(y2-y1,2) + pow(z2 - z1, 2));
    printf("la distance entre les deux points entrer est: %f",distance);
    return 0;
}