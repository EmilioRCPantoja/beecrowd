#include<stdio.h>
#include<stdlib.h>

int main(){
    int A, B, C, maiorab, outromaior;
    scanf("%d %d %d", &A, &B, &C);
    
    maiorab = (A+B+abs(A-B))/2;
    outromaior = (maiorab + C + abs(maiorab-C))/2;

    printf("%d eh maior\n", outromaior );
}