#include <stdio.h>
#include <string.h>
int main(){
    int d,m,y;
    char mn[20];
    printf("entrer une date au format jour/mois/an (23/02/2025) :  ");
    scanf("%d/%d/%d",&d,&m,&y);
    switch (m)
    {
    case 1:
        strcpy(mn,"janvier");
        break;
    case 2:
        strcpy(mn,"fevrier");
        break;
    case 3:
        strcpy(mn,"mars");
        break;
    case 4:
        strcpy(mn,"avril");
        break;
    case 5:
        strcpy(mn,"may");
        break;
    case 6:
        strcpy(mn,"jun");
    case 7:
        strcpy(mn,"Jull");
        break;
    case 8:
        strcpy(mn,"Aout");
        break;
    case 9:
        strcpy(mn,"Septembre");
        break;
    case 10:
        strcpy(mn,"October");
        break;
    case 11:
        strcpy(mn,"November");
        break;
    case 12:
        strcpy(mn,"December");
        break;
    default:
    printf("date invalide !!");
        break;
    }
    printf(" %d-%s-%d ",d,mn,y);
    return 0;
}