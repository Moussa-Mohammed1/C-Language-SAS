#include <stdio.h>
int main(){
    int n;
    int reste;
    int inverse = 0;
    printf("Entrer un entier:");
    scanf("%d",&n);
    while (n != 0)
    {
        reste = n % 10;
        inverse = inverse * 10 + reste;
        n = n / 10;
    }
    printf("nombre inverse: %d",inverse);
    return 0;
}