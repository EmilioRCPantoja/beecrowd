#include<stdio.h>

int main()
{
    int x, y, cont = 0, aux = 0, i = 0;

    scanf("%d %d", &x, &y);

    if(x > y)
    {

        x = y-x;
        y = y-x;
        x = y + x;

    }

    for(i = x + 1; i < y; i++)
    {
        if(i % 2 != 0)
        {
            cont += i;
        }
    }

    printf("%d\n", cont);
}