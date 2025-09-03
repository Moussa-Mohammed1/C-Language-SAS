#include <stdio.h>

int main(){
    int a,b;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b:");
    scanf("%d",&b);
    
    if(a==b){
        printf("le triple du somme  est : %d",a*6);
    }
    else 
        printf("la somme est : %d", a+b);
    return 0;
}