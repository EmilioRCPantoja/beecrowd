#include<stdio.h>

int main()
{
    int num, i;

    scanf("%d", &num);

    for(i = 1; i <= num; i+=2)
    {
        printf("%d\n", i);
    }
}