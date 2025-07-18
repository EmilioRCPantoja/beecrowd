#include<stdio.h>

int main()
{
    int i, conta = 0;
    float num, media ;

    for(i=0; i<=5;i++)
    {
        scanf("%f", &num);
        if(num > 0)
        {
            conta = conta+1;
            media = media + num;
        }
    }

    media = media/conta;
    
    printf("%d valores positivos\n%0.1f\n", conta, media);

}
