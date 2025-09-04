#include <stdio.h>
#include <stdlib.h>

void Multiplication(int a,int b){
    int produit;
    produit = a *b;
    printf("produit = %d",produit);
}
int main(){
    int a,b;
    printf("Entrer le premier nombre (entier): ");
    scanf("%d",&a);
    printf("Entrer le deuxieme nombre (entier): ");
    scanf("%d",&b);
    Multiplication(a,b);
    return 0;
}