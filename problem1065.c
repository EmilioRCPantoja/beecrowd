#include<stdio.h>

int main()
{
    int i, conta = 0, num;

    for(i=0;i<5;i++)
    {
        scanf("%d", &num);
        if(num%2 == 0)
        {
            conta += 1;
        }
    }

    printf("%d valores pares\n", conta);
}