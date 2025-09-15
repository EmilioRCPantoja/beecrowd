#include<iostream>

using namespace std;

int main(){
    int horaI, minutoI, horaF, minutoF, começo, final, total;
    
    scanf("%d %d %d %d", &horaI, &minutoI, &horaF, &minutoF);
    
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



    /*if(horaF == horaI && minutoF == minutoI) {

        horaD = 24;scanf("Dia %d", d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    
        minutoD = 0;

    }

    while(horaI != horaF){
        
        if(horaI > 24){
            horaI = 0;
        }
        
        while(minutoI != minutoF){
            if(minutoI == 60){
                minutoI = 0;
                horaI+=1;
            }
            minutoD+=1;
            minutoI+=1;
        }
        
        horaD+=1;
        horaI+=1;
    }
    if(horaD == 25){
        horaD = 0;
    }*/

    cout<< "O JOGO DUROU "<< total/60 << " HORA(S) E " << total%60 << " MINUTO(S)" <<endl;

}