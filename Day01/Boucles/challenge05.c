 #include <stdio.h>
int main(){
    int base;
    int exposant;
    int puissance;
    printf("entrer un nombre entier (base):");
    scanf("%d",&base);
    printf("entrer son exposant:");
    scanf("%d",&exposant);

    puissance = 1;
    for (int i = 1; i <=exposant ; i++)
    {
        puissance *= base;
    }
    printf("%d ^ %d = %d ",base, exposant, puissance);
    return 0;
}