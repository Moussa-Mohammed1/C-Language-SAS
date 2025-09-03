#include <stdio.h>
int main(){
    float x1,y1,x2,y2;
    float x,y;
    printf("entrer la premiere extremite du segment (x1 y1):");
    scanf("%f %f",&x1,&y1);

    printf("entrer la deuxieme extremite du segment (x2 y2):");
    scanf("%f %f",&x2,&y2);

    printf("entrer les coordonnes du point (x y):");
    scanf("%f %f",&x,&y);

    float det = (x -x1) * (y2 - y1) - (y - y1) * (x2 - x1);
    if (det == 0)
    {
        if (x >= x1 && x <= x2 || x >= x2 && x <= x1)
        {
            if (y >= y1 && y <= y2 || y >= y2 && y <= y1)
            {
                printf("le point est sur le segment.");
            }
            else
            {
                printf("le point sur la droite mais en dehors du segment.");
            }
        }
        else
        {
            printf("le point est sur la droite mais en dehors du segment.");
        }
    }
    else
    {
        printf("le point n'est pas sur le segment !\n");
    }
    return 0;
}