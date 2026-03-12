#include<stdio.h>

int main(){

    int a, b, c;

    A:
    scanf("%d", &a);

    if(a < -10000 || a > 10000)
        goto A;

    B:
    scanf("%d", &b);

    if(b < 0 || b > 99)
        goto B;

    C:
    scanf("%d", &c);
    
    if( c < 0 || c > 999)
        goto C;
  

printf("A = %d, B = %d, C = %d\n", a, b, c);

printf("A = %10d, B = %10d, C = %10d\n", a, b, c);

printf("A = %010d, B = %010d, C = %010d\n", a, b, c);

printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

}

