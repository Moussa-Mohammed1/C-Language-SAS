#include <stdio.h>
int main(){
    int n;
    int i; 
    int suivant, a = 0, b = 1 ;
    printf("Entrer le nombre des termes : ");
    scanf("%d",&n);
    printf("les %d termes de Fibonacci est :",n);
    for ( i = 0 ; i < n; i++)
    {
        if (i == 0)
        {
            suivant = a;
        }
        if (i == 1)
        {
            suivant = b;
        }
        else
        {
            suivant = a + b;
            a = b;
            b = suivant;
        }
        printf("%d ,",suivant);
    }
    printf(".");
    return 0;
}