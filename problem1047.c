#include<stdio.h>


int main(){
    double horaI, minutoI, horaF, minutoF, começo, final;
    int total;
    
    scanf("%lf %lf  %lf  %lf", &horaI, &minutoI, &horaF, &minutoF);
    
    começo = horaI * 60 + minutoI;
    final = horaF * 60 + minutoF;

    if(começo == final){
        total = 24 * 60;
    }
    else{
        if(começo < final){
            total = final - começo;
        }
        else{
            total = (60 * 24 - começo) + final;
        }
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total/60, total%60);

}