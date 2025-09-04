#include <stdio.h>
#include <stdlib.h>
void minimum(int a,int b){
    if (a >= b)
    {
        if (a > b)
        {
            printf("Le minimum : %d",b);
        }
        else
        {
            printf("Nombre egaux, pas de minimum");
        }
    }
    else
    {
        printf("Le minimum est : %d",a);
    }
}
int main(){
    int a,b;
    printf("Entrer le premier nombre (entier): ");
    scanf("%d",&a);
    printf("Entrer le deuxieme nombre (entier): ");
    scanf("%d",&b);
    minimum(a,b);
    return 0;
}