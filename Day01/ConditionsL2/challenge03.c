#include <stdio.h>
#include <conio.h>
int main(){
    int jourcgaccorde;
    int jourcgutilise;
    int status;
    int joursrestant;

    printf("Entrer le nombre total de jours de congés accordés :");
    scanf("%d",&jourcgaccorde);
    printf("Entrer le nombre de jours de congés utilises :");
    scanf("%d",&jourcgutilise);
    printf("Entrer la statut de l'employé (0 pour temps partiel, 1 pour temps plein): ");
    scanf("%d",&status);
    
    if (jourcgutilise > jourcgaccorde)
    {
        printf("ALERT! les jours utilisés dépassent les jours accordés. ");
    }
    else
    {
        if (status == 1)
        {
            joursrestant = jourcgaccorde - jourcgutilise;
            printf("les jours de congé restant est : %d jours.",joursrestant);
        }
        else if (status == 0)
        {
            if (jourcgutilise > (jourcgaccorde / 2))
            {
                printf("ALERT! les jours utilisés dépassent les jours accordés(temps partiel).");
            }
            else
            {
                joursrestant = (jourcgaccorde / 2) - jourcgutilise;
                printf("les jours de congé restant est : %d jours.",joursrestant);
            }
        }
    }
    
    return 0;
    
}