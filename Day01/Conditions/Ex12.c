#include <stdio.h>
int main(){
    int h1,m1,s1;
    int h2,m2,s2;
    printf("entrer le premiere instant dans le format HH:MM:SS : ");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("entrer le deuxieme instant dans le format HH:MM:SS : ");
    scanf("%d:%d:%d",&h2,&m2,&s2);

    if (h1 != h2)
    {
        if (h1 > h2)
        {
            printf("Le deuxième instant vient avant le premier");
        }
        else
        {
            printf("Le premier instant vient avant le deuxième");
        }
    }else
    {
        if (m1 != m2)
        {
            if (m1 > m2)
            {
                printf("Le deuxième instant vient avant le premier");
            }
            else
            {
                printf("Le premier instant vient avant le deuxième");
            }
            
        }
        else
        {
            if (s1 != s2)
            {
                if (s1 > s2)
                {
                    printf("Le deuxième instant vient avant le premier");
                }
                else
                {
                    printf("Le premier instant vient avant le deuxième");
                }
                
            }
            else
            {
                printf("Il s'agit du même instant.");
            }
            
        }
        
        
    }
    
    

   
 

    

}