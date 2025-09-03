#include <stdio.h>
int main(){
    float a,b;
    printf("entrer a:");
    scanf("%f",&a);
    printf("entrer b:");
    scanf("%f",&b);
    printf("a + b = %f\n",a+b);
    printf("a - b = %f\n",a-b);
    printf("a x b = %f\n",a*b);
    if (b==0)
    {
        printf("division impossible, b doit etre differente de 0 !");
    }
    else
    {
        printf("a / b = %f",a/b);
    }
    
    return 0;

}