#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    char nom[50];
    char prenom[50];
    char sexe[20];
    char email[50];
    printf("entrer votre prenom:");
    scanf("%s",&prenom);
    printf("entrer votre nom:");
    scanf("%s",&nom);
    printf("entrer votre age:");
    scanf("%d",&age);
    printf("entrer votre sexe:");
    scanf("%s",&sexe);
    printf("entrer votre email:");
    scanf("%s",&email);

    printf("vos donnez sont:\nPrenom:%s\n",prenom);
    printf("Nom:%s\n",nom);
    printf("Age:%d\n",age);
    printf("Sexe:%s\n",sexe);
    printf("email:%s",email);
    return 0;
}

