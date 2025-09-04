#include <stdio.h>
int main(){
    int taille;
    int i,min;
    printf("Entrer le nombres des elements du tableau : ");
    scanf("%d",&taille);
    int tab[taille];
    for ( i = 0; i < taille; i++)
    {
        printf(" tab[%d] = ",i+1);
        scanf("%d",&tab[i]);
    }
    min = tab[0];
    for ( i = 0; i < taille; i++)
    {
        if (min  > tab[i])
        {
            min = tab[i];
        }
    }
    printf("le minimum dans votre tableaux est : %d",min);
    return 0;
}