#include <stdio.h>
typedef struct personne{
    char nom[20];
    char prenom[20];
    int age;
} personne;

int main(){
    personne p1={"Moussa","Mohammed",20};
    printf("Nom : %s\n",p1.nom);
    printf("Nom : %s\n",p1.prenom);
    printf("Nom : %d\n",p1.age);
    return 0;
}