#include<stdio.h>

int main()
{
    int qtd, n, i = 0, contin = 0, contout = 0;

    scanf("%d",&qtd);

    for(i = 0; i < qtd; i++)
    {
        scanf("%d", &n);

        if(n >= 10 && n <= 20)
        {
            contin++;
        }
        else
        {
            contout++;
        }
    }

    printf("%d in\n%d out\n", contin, contout);
}