#include <stdio.h>
#include <stdlib.h>
void Fibonacci(int a){
    int Fn;
    int next = 1;
    int actual =0;
    if (a == 0 || a == 1)
    {
        if (a == 0)
        {
            printf("%d",actual);
        }
        else
        {
            printf("%d",next);
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            printf("%d ",actual);
            Fn = next + actual;
            actual = next;
            next = Fn;
        }
    }
}
int main(){
    int a;
    printf("Entrer le terme : ");
    scanf("%d",&a);
    Fibonacci(a);
    return 0;
}