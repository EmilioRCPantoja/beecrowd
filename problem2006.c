#include<stdio.h>

int main()
{
    int i, tipo, resp, cont = 0;

    scanf("%d", &tipo);

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &resp);
        
        if(resp == tipo)
        {
            cont++;
        } 
    }

    printf("%d\n",cont);

}