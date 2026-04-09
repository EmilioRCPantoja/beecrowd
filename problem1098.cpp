#include<bits/stdc++.h>

using namespace std;

int main(){

    double i = 0, j = 1;

    while(i<=2.01){
        if((int) (i*10) % 10 == 0)
            cout << "I=" << (int)i << " J=" << (int)j << endl;
        else
            cout << "I=" << i << " J=" << j << endl;

        if(j >=i+3-0.01){
            
            i+=0.2;
            j = i+1;

        }
        else{
            j+=1;
            
        }


        
        
    }


}