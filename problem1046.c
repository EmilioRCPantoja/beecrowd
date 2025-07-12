#include <stdio.h>

int main()
{
    int ini, fim, tempo;

    scanf("%d %d", &ini, &fim);

    if(ini == fim)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        if(ini > fim)
        {
            tempo = (24 + fim) - ini;
            printf("O JOGO DUROU %d HORA(S)\n", tempo);

        }
        else
        {
            tempo = fim - ini;
            printf("O JOGO DUROU %d HORA(S)\n", tempo);
        }
    }

}