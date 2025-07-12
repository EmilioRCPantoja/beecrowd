#include<stdio.h>

int main()
{
    int divis, divid;

    scanf("%d %d", &divis, &divid);

    if((divid%divis) == 0 || (divis%divid) == 0)
    {
        printf("Sao Multiplos\n");

    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
}