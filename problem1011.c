#include <stdio.h>
 
int main() {
    double raio, VOLUME, pi;
    pi=3.14159;
    scanf("%lf", &raio);
    VOLUME=(4.0/3) * pi * (raio * raio * raio);
    printf("VOLUME = %0.3lf\n", VOLUME);
   
 
    return 0;
}