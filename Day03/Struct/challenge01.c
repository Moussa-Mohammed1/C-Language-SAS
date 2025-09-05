#include <stdio.h>
struct personne{
    char nom[20];
    char prenom[20];
    int age;
} personne;

int main(){
    struct personne p1={"Moussa","Mohammed",20};
    printf("Nom : %s\n",p1.nom);
    printf("Prenom : %s\n",p1.prenom);
    printf("Age : %d\n",p1.age);
    return 0;
}