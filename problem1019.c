#include<stdio.h>

int main()
{
    int n, min, h, s;
    scanf("%d", &n );

    h= n/3600;
    min= (n%3600)/60;
    s = n%60;

    printf("%d:%d:%d\n", h,min,s );

}