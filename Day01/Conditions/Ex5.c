#include <stdio.h>
#include <math.h>

int estbissextile(int annee){
    if ((annee % 400 == 0)|| (annee % 4 == 0 && annee % 100 != 0))
    {
        return 1;
    }
    return 0;
}


int main() {
    int choix;
    int annee;
    int mois, jours;
    long heures, minutes, secondes;
    printf("entrer l'annee :");
    scanf("%d",&annee);
    if (estbissextile(annee))
    {
        jours = 366;
    }else{
        jours = 365;
    }
    mois = 12;
    reessayer:
    printf("tu veux convertir %d en :\n",annee);
    printf("1. mois \n");
    printf("2. jours \n");
    printf("3. heurs \n");
    printf("4. minutes \n");
    printf("5. secondes \n");
    printf("votre choix:");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        printf("l'annee %d = %d mois", annee, mois);
        break;
    case 2:
        printf("l'annee %d = %d jours",annee, jours);
        break;
    case 3:
        heures = jours * 24;
        printf("l'annee %d = %ld heures", annee, heures);
        break;
    case 4:
        heures = jours * 24;
        minutes = heures * 60;
        printf("l'annee %d = %ld minutes", annee, minutes);
        break;
    case 5:
        heures = jours *24;
        minutes = heures *60;
        secondes = minutes *60;
        printf("l'annee %d = %ld secondes", annee, secondes);
        break;
    default:
        printf("choix invalide, veuillez reessayez\n");
        goto reessayer;
    }
    return 0;
}