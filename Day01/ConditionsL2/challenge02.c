#include <stdio.h>
int main(){
    int ageconducteur;
    int typevoiture;
    int nbraccident;
    float primebase;
    float primefinal;
    printf("Entrer l'age du conducteur (en années):");
    scanf("%d",&ageconducteur);

    printf("Entrer type de voiture:\n 1. pour sportive.\n 2. pour utilitaire.\n 3. pour familiale.");
    scanf("%d",&typevoiture);

    printf("Entrer le nombre d'accidents au cours des 5 dernières années:");
    scanf("%d",&nbraccident);

    printf("Entrer le prime de base :");
    scanf("%f",&primebase);
    primefinal = primebase;
    if (ageconducteur < 25)
    {
        primefinal *= 1.5;
    }
    else if (ageconducteur > 65 )
    {
        primefinal *= 1.2; 
    }
    switch (typevoiture)
    {
    case 1:
        primefinal *= 2;
        break;
    case 2:
        primefinal *= 1.2;
        break;
    case 3:
        primefinal *= 1.1;
        break;
    default:
        goto out;
        break;
    }
    out:
    if(nbraccident > 1)
    {
        primefinal += (primefinal * 0.3);
    }
    printf("le prime d'assurrance final est : %f",primefinal);
    return 0;
}