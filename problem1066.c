#include<stdio.h>

int main()
{
    int n, i, contpa = 0, conti = 0, contp = 0, contn = 0 ;

    for(i = 0; i<5; i++)
    {
        scanf("%d", &n);

        if(n % 2 == 0 )
        {
            ++contpa;
        }
        if(n % 2 != 0)
        {
            ++conti;
        }
        if(n > 0)
        {
            ++contp;
        }
        if(n < 0)
        {
            ++contn;
        }
        
    }

    printf("%d valor(es) par(es)\n", contpa);
    printf("%d valor(es) impar(es)\n", conti);
    printf("%d valor(es) positivo(s)\n", contp);
    printf("%d valor(es) negativo(s)\n", contn);

}