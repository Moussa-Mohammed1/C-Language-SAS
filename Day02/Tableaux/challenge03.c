#include <stdio.h>
int main(){
    int taille;
    int i;
    printf("entrer le nombre des elements du tableaux : ");
    scanf("%d",&taille);
    int tab[taille];
    int somme = 0;
    for ( i = 0; i < taille; i++)
    {
        printf("tab[%d] = ",i+1 );
        scanf("%d",&tab[i]);
        somme += tab[i];
    }
    printf("la somme des elements du tableaux est : %d",somme);
    return 0;    
}