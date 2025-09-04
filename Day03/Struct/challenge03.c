#include <stdio.h>
typedef struct rectangle
{
    float langeur;
    float largeur;

}rectangle;

void Airrectangle(rectangle r){
    float air;
    air = (r.langeur + r.largeur)* 2;
    printf("l'air est : %.2f",air);

}
int main(){
    rectangle r;
    r.langeur = 2.5;
    r.largeur = 5.9;
    Airrectangle(r);
    return 0;
}