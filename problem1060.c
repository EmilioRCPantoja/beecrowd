#include<stdio.h>

int main()
{
    int i, conta = 0;
    float num ;

    for(i=0; i<=5;i++)
    {
        scanf("%f", &num);
        if(num > 0)
        {
            conta = conta+1;
        }
    }
    
    printf("%d valores positivos\n", conta);

}