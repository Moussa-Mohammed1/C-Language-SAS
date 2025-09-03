#include <stdio.h>
int main(){
    double budget;
    int destination;
    int nbrpersonne;

    printf("Entrer votre budget (en euros) ");
    scanf("%lf",&budget);

    printf("Entrer votre destination (1 pour plage, 2 pour montagne, 3 pour ville):");
    scanf("%d",&destination);

    printf("Entrer le nombre des personnes :");
    scanf("%d",&nbrpersonne);
    
    if (budget >= 1000)
    {
        printf("Niveau de voyage : Haut de gamme.\n");
    }
    else if (budget >= 500 && budget < 1000)
    {
        printf("Niveau de voyage : Moyen.\n");
    }
    else
    {
        printf("Niveau de voyage : Economique.\n");
    }
    
    // destination recommande !
    if (budget >= 1000 && nbrpersonne > 2)
    {
        printf("La destination recommandee : Plage.\n");
    }
    else if (budget >= 500 && nbrpersonne <= 2)
    {
        printf("la destination recommandee : Montagne.\n ");
    }
    else
    {
        printf("La destination recommandee : Ville.\n");
    }
    return 0;
}