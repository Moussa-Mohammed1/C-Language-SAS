#include <stdio.h>
int main(){
    int t;
    printf("entrer la temperature en celsius:");
    scanf("%d",&t);
    if (t<0)
    {
        printf("l'etat de l'eau a cette temperature est : Solide");
    }
    else if (t>=0 && t<100)
    {
        printf("l'etat de l'eau a cette temperature est : Liquide");
    }
    else{
        printf("l'etat de l'eau a cette temperature est : Gaz");
    }
    return 0;
}