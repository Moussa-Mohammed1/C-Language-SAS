#include <stdio.h>
int main(){
    int taille;
    int i,min;
    int factor;
    printf("Entrer le nombres des elements du tableau : ");
    scanf("%d",&taille);
    int tab[taille];
    for ( i = 0; i < taille; i++)
    {
        printf(" tab[%d] = ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Entrer le facteur de multiplication :");
    scanf("%d",&factor);
    for ( i = 0; i < taille; i++)
    {
        tab[i] = tab[i] * factor;
    }
    for ( i = 0; i < taille; i++)
    {
        printf(" tab[%d] = %d\n",i+1,tab[i]);
    }
    return 0;
}