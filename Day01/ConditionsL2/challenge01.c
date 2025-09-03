#include <stdio.h>
int main(){
    long revenu;
    long scorecredit;
    int dureepret;

    printf("entrer revenu annuel (en euros): ");
    scanf("%ld",&revenu);

    printf("entrer Score de crédit (sur 1000): ");
    scanf("%ld",&scorecredit);

    printf("entrer Durée du prêt (en années): ");
    scanf("%d",&dureepret);

    if (revenu >= 30000 && scorecredit >= 650 && dureepret <= 15)
    {
        if (scorecredit >= 700 && dureepret <= 10)
        {
            printf(" Éligible !");
        }
        else
        {
            printf("Éligible avec conditions !");
        }   
    }
    else
    {
        printf("Non éligible");
    }
    return 0;
}