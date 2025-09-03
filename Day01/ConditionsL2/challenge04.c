#include <stdio.h>
int main(){
    float score;
    int anciennete;
    int recompenses;
    float scorefinal;
    printf("Entrer le score de performance (de 0 à 100): ");
    scanf("%f",&score);
    printf("Entrer l'ancienneté (en années): ");
    scanf("%d",&anciennete);
    printf("Entrer le nombre des récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus):");
    scanf("%d",&recompenses);
    scorefinal = score;
    if (recompenses > 0)
    {
        if (recompenses == 1)
        {
            scorefinal *= 0.1;
        }
        else
        {
            scorefinal *= 0.2;
        }
    }
    if (scorefinal >= 90 && anciennete >= 5)
    {
        printf("La performance d'employer est : Excellente (score final : %.2f)",scorefinal);
    }
    if (scorefinal >= 75 && anciennete >= 3)
    {
        printf("La performance d'employer est : Bonne (score final : %f)",scorefinal);
    }
    if (scorefinal >= 50 && anciennete <3 )
    {
        printf("La performance d'employer est : Satisfaisante (score final : %f)",scorefinal);
    }
    if(scorefinal < 50)
    {
        printf("La performance d'employer est : insuffisante (score final : %f)",scorefinal);
    }
    return 0;
}