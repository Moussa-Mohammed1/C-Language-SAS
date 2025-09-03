#include <stdio.h>
int main(){
    float a;
    int r;
    repeat:
    printf("entrer un nombre:");
    scanf("%f",&a);
    if (a<0)
    {
        printf("le nombre est negatif !!\n");
    }
    else if (a>0)
    {
        printf("le nombre est positif !!\n");
    }
    else 
        printf("le nombre est null !!\n");
    valide:
    printf("do you want to try again ?\n 1. yes\n 2. no\n VOTRE CHOIX: ");
    scanf("%d",&r);
    switch (r)
    {
    case 1:
        goto repeat;
    case 2:
        printf("progamme terminee!");
        break;
    default:
        printf("choix invalide !");
        goto valide;
    }
    return 0;
}