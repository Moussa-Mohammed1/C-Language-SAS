#include <stdio.h>
int main(){
    int a;
    printf("entre un nombre :");
    scanf("%d",&a);
    if(a%2==0){
        printf("le nombre %d est pair!",a);
    }
    else 
        printf("le nombre %d est impair!",a);
    return 0;
}