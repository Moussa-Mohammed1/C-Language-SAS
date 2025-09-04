#include <stdio.h>
int main(){
    int i;
    int n;
    int f = 1;
    printf("Entrer un nombre entier :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        f*=i;
    }
    printf("%d! = %d",n,f);
    return 0;
}