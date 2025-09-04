#include <stdio.h>
void FonctionSomme(int a,int b){
    int somme;
    somme = a +b;
    printf("La somme est %d",somme);
}
int main(){
    int a,b;
    printf("Entrer le premier nombre (entier):");
    scanf("%d",&a);
    printf("Entrer le deuxieme nombre (entier):");
    scanf("%d",&b);
    FonctionSomme(a,b);
    return 0;
}