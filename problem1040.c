#include<stdio.h>

int main()
{
    float n1, n2, n3, n4, ne, med, medf;

    scanf("%f %f %f %f", &n1,&n2,&n3,&n4);

    med = ((n1 * 2) + (n2 * 3) + (n3 * 4) +n4)/10;

    if(med < 5)
    {
        printf("Media: %0.1f\n", med);
        printf("Aluno reprovado.\n");

    }
    else
    {
        if(med >= 7)
        {
            printf("Media: %0.1f\n", med);
            printf("Aluno Aprovado.\n");
        }
        else
        {
            scanf("%f", &ne);
            medf = (med+ne)/2;
            if(medf < 5 )
            {
                printf("Media: %0.1f\n", med);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %0.1f\n", ne);
                printf("Aluno reprovado.\n");
                printf("Media final: %0.1f\n", medf);

            }
            else
            {
                printf("Media: %0.1f\n", med);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %0.1f\n", ne);
                printf("Aluno aprovado.\n");
                printf("Media final: %0.1f\n", medf);
            }
        }
    }
    
    
    return 0;
}