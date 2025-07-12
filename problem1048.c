#include<stdio.h>

int main()
{
    float sala, ajuste, PerC;

    scanf("%f", &sala);

    if(sala < 400.01)
    {
        ajuste = 0.15 * sala;

        PerC = 15;
        
    }
    else
    {
        if(sala>400 && sala<=800.01)
        {
            ajuste = 0.12 * sala;

            PerC = 12;
        }
        else 
        {
            if(sala > 800 && sala <= 1200.01)
            {
                ajuste = 0.1 * sala;

                PerC = 10;
            }
            else
            {
                if(sala > 1200 && sala <= 2000)
                {
                    ajuste = 0.07 * sala;
                    
                    PerC = 7;
                }
                else
                {
                    if(sala > 2000)
                    {
                        ajuste = 0.04 * sala;

                        PerC = 4;
                    }
                }
            }
        }
    }

    sala = sala + ajuste;

    printf("Novo salario: %0.2f\n", sala);
    printf("Reajuste ganho: %0.2f\n", ajuste);
    printf("Em percentual: %0.0f %%\n", PerC);

}