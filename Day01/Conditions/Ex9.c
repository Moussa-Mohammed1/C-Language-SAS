#include <stdio.h>
int main(){
    char c;
   
    printf("entrer un caracter :");
    scanf("%c",&c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if ((c >= 'a' && c <= 'z'))
        {
            printf("le caractere %c est un alphabet minuscule !\n",c);
        }
        else 
            printf("le caractere %c est un alphabet Majuscule !\n",c);
    }
    else 
        printf("le caractere entrer n'est pas un alphabet !!\n");
    return 0;
}