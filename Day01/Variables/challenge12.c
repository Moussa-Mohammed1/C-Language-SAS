#include <stdio.h>
int main(){
    int num;
    int inverse; 
    printf("entrer un entiere de 4 chiffre:");
    scanf("%d",&num);
    inverse = (num%10) *1000 + ((num/10)%10) *100 + ((num/100)%10) *10 + (num/1000);
    printf("%d",inverse);
    return 0;
}