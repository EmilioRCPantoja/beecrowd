#include<stdio.h>

int main(){
    float dist, gas, gasto;

    scanf("%f %f", &dist, &gas );
    gasto = dist/gas;
    printf("%0.3f km/l\n", gasto);
}