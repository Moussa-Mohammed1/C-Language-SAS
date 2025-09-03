#include <stdio.h>
int main(){
    char c;
    printf("entrer un caractere: ");
    scanf(" %c",&c);
    switch (c)
    {
    case 'a': case 'o': case 'i': case 'u': case 'e':
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf(" le caractere %c est une voyelle !",c);
    break;
    
    default:
        printf(" le caractere %c pas une voyelle !",c);
    }
    return 0;
}