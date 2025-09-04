#include <stdio.h>
int main(){
    int taille;
    int i;
    printf("entrer le nombre des elements du tableau:");
    scanf("%d",&taille);
    int t[taille];
    printf("entrer ces elements: \n");
    for (i = 0; i < taille; i++)
    {
        printf("t[%d] = ",i + 1);
        scanf("%d",&t[i]);
    }
    for ( i = 0; i < taille; i++)
    {
        printf("t[%d] = %d\n",i,t[i]);
    }
    
    return 0;
}