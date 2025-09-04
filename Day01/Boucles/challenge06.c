#include <stdio.h>
int main(){
    int n;
    int i;
    printf("ENtrer un nombre entier:");
    scanf("%d",&n);
    printf("les %d nombres entiers pair est : ",n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d",2 * i);
        if (i < n)
        {
            printf(", ");
        }
        else{printf(".");}
    }
    return 0;
}