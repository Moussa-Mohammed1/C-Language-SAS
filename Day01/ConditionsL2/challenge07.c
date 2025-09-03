#include <stdio.h>
int main(){
    double revenuAnnuel;
    int statusFiscal;
    double deductions;
    double totalImpots;
    printf("Entrer votre revenu annuel(en euros): ");
    scanf("%lf",&revenuAnnuel);
    printf("Entrer votre status fiscal (1 pour celibataire, 2 pour marié, 3 pour chef de famille) :");
    scanf("%d",&statusFiscal);
    printf("Entrer votre deductions (en euros):");
    scanf("%lf",&deductions);
    totalImpots = deductions;
    if (revenuAnnuel <= 20000 )
    {
        totalImpots += (revenuAnnuel * 0.05);
    }
    else if (revenuAnnuel > 20000 && revenuAnnuel <= 50000)
    {
        totalImpots += (revenuAnnuel * 0.10);
    }
    else
    {
        totalImpots += (revenuAnnuel * 0.20);
    }
    switch (statusFiscal)
    {
    case 1:
        totalImpots += 1000;
        break;
    case 2:
        totalImpots += 2000;
        break;
    case 3:
        totalImpots += 3000;
    default:
        printf("Status fiscal invalide !");
        goto exit;
        break;
    }
    printf("Votre total des impots considerons les informations entre est : %lf",totalImpots);
    exit:
    return 0;
    
}