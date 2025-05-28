#include<stdio.h>

int main()
{
    int a, b, c, d, sum;
   

    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = (c+d);
    if(b>c && d > a && sum > (a+b) && c >= 0 && d >= 0 && (a%2) == 0)
    {
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0 ;
}