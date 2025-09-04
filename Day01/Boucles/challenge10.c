#include <stdio.h>
int main(){
    int n;
    int i;
    int somme =0;
    printf("entrer un nombre entier :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        somme += i;
    }
    printf("la somme des %d premiers nombres est : %d",n,somme);
    return 0;
}