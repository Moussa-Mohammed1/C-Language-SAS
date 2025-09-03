#include <stdio.h>
int main(){
    double consommation;
    int TypeUtilisateur;
    int TypeContrat;
    double facture;
    printf("Entrer la consommation d'electricite  (en kWh) : ");
    scanf("%lf",&consommation);
    printf("Entrer le type d'utilisateur (1 pour résidentiel, 2 pour commercial) : ");
    scanf("%d",&TypeUtilisateur);
    printf("Entrer le type de contrat (0 pour standard, 1 pour réduit) : ");
    scanf("%d",&TypeContrat);

    if (TypeUtilisateur == 1)
    {
        if (TypeContrat == 0)
        {
            facture = consommation * 0.20;
        }
        else if (TypeContrat == 1)
        {
            facture = consommation * 0.15;
        }
        else
        {
            printf("type de cantrat n'existe pas !");
        }
    }
    else if (TypeUtilisateur == 2)
    {
        if (TypeContrat == 0)
        {
            facture = consommation * 0.30;
        }
        else if (TypeContrat == 1)
        {
            facture = consommation * 0.25;
        }
        else
        {
            printf("type de cantrat n'existe pas !");
        }
    }
    else
    {
        printf("type d'utilisateur n'existe pas !");
    }
    if (consommation > 500)
    {
        facture += (facture * 0.10);
        printf("Votre Facture d'Électricité est : %.4lf Euros",facture);
    }
    else
    {
        printf("Votre Facture d'Électricité est : %.4lf Euros",facture);
    }
    return 0;
}