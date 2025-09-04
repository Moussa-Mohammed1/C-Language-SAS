#include <stdio.h>
#include <stdlib.h>
void maximum(int a,int b){
    if (a <= b)
    {
        if (a < b)
        {
            printf("Le maximum : %d",b);
        }
        else
        {
            printf("Nombre egaux, pas de maximum");
        }
    }
    else
    {
        printf("Le maximum : %d",a);
    }
}
int main(){
    int a,b;
    printf("Entrer le premier nombre (entier): ");
    scanf("%d",&a);
    printf("Entrer le deuxieme nombre (entier): ");
    scanf("%d",&b);
    maximum(a,b);
    return 0;
}