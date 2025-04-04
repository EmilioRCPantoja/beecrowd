#include<stdio.h>

int main(){
    char nome[60];
    double total, salfix, sales;
    scanf("%s", nome);
    scanf("%lf", &salfix);
    scanf("%lf", &sales);
    total = salfix +(sales*0.15);
    printf("TOTAL = R$ %0.2lf\n", total);

    return 0;
}