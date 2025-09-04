#include <stdio.h>
int main(){
    long long int n;
    int count = 0;
    printf("Entrer un entier positif: ");
    scanf("%lld",&n);

    if ( n == 0)
    {
        count = 1;
    }
    else
    {
        while (n > 0)
        {
            n = n / 10;
            count ++;
        }
        
    }
    printf(" le nombre des chiffres est : %d", count);
    return 0;
}