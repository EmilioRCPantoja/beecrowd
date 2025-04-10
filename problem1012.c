#include<stdio.h>

int main()
{
    double A, B, C, triang, circ, trap, quad, ret;
    scanf("%lf %lf %lf", &A, &B, &C);

    triang = (A*C)/2;
    circ = (C*C)*3.14159;
    trap = ((A+B)*C)/2;
    quad = B*B;
    ret = A*B;

    printf("TRIANGULO: %0.3lf\n", triang);
    printf("CIRCULO: %0.3lf\n", circ);
    printf("TRAPEZIO: %0.3lf\n", trap);
    printf("QUADRADO: %0.3lf\n", quad);
    printf("RETANGULO: %0.3lf\n", ret);

}