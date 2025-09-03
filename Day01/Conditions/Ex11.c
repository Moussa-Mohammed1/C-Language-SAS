#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char jours[7][10]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
    srand(time(NULL));
    int index = rand() % 7;
    printf("jour Aleatoire : %s\n",jours[index]);
    return 0;
}