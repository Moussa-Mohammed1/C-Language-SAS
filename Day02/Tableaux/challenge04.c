#include <stdio.h>
int main(){
    int taille;
    int i;
    printf("Entrer le nombres des elements du tableau : ");
    scanf("%d",&taille);
    int tab[taille];
    int max = 0;
    for ( i = 0; i < taille; i++)
    {
        printf(" tab[%d] = ",i+1);
        scanf("%d",&tab[i]);
        if (max < tab[i])
        {
            max = tab[i];
        }
    }
    printf("le plus grande nombre dans votre tableaux est : %d",max);
    return 0;
}