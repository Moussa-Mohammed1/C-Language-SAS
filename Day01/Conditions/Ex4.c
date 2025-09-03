#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,x1,x2;
    double delta;
    printf("entrer les coefficient a,b et c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a==0)
    {
        if(b!=0){
            x1 = -c/b;
            printf("l'equation a une solution, c'est: %.2f ",x1);
        }
        else{
            if(c==0){
                printf("equation indetermine (0.0)\n");
            }
            else{
                printf("equation impossible (aucune solution!)\n");
            }
        }
    }
    delta = (b * b) - (4 * a * c);
    
    if(delta == 0)
    {
        x1 = -b/(2*a);
        printf("l'equation a une seule solution reelle : %.2f",x1);
    }
    else if (delta>0)
    {
        x1 = (-b - sqrt(delta))/2 * a;
        x2 = (-b + sqrt(delta))/2 * a;
        printf("l'equation a deux solution reelles :\n x1 = %.2f\n x2 = %.2f",x1,x2);
    }
    else
        {
        printf("pas de solution reelle ( solution complexe)!");
    }
    
    return 0;
}