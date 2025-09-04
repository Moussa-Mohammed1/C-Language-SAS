#include <stdio.h>
int main(){
    int i;
    int n;
    printf("Entrer un nombre entier :");
    scanf("%d",&n);
    printf("les %d premiers nombres impairs sont : ",n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d",2 * i -1);
        if (i < n)
        {
            printf(", ");
        }
    }
    printf("\n");

    
    return 0;
}