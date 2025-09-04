#include <stdio.h>
int main(){
    int i;
    int n;
    int s = 0;
    printf("Entrer un nombre entier :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s+=i;
        if (i==n)
        {
            goto out;
        }
        
        printf("%d + ",i);
    }
    out:
    printf("%d = %d",n,s);
    return 0;
}