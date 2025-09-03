#include <stdio.h>
int main(){
    char c;
    int r;
    repeat:
    printf("entrer un caractere :");
    scanf("%c",&c);
    if (c>='65' && c<='90')
    {
        printf("%c est un caractere Majuscule.\n",c);
    }
    else{
        printf("%c n'est pas un caractere Majuscule\n",c);
    }
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