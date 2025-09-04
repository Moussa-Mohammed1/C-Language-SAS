#include <stdio.h>
#include <stdlib.h>
void factorielle(int a){
    int fact = 1;
    for (int  i = 1; i <= a; i++)
    {
        fact *= i;
    }
    printf("Le Factorielle est : %d",fact);
}
int main(){
    int a;
    printf("Entrer nombre (entier): ");
    scanf("%d",&a);
    factorielle(a);
    return 0;
}