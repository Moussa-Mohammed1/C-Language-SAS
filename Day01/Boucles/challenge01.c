#include <stdio.h>
int main(){
    int i;
    int n;
    printf("Entrer un nombre entier :");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d  ",n,i,n*i);
    }
    return 0;
}