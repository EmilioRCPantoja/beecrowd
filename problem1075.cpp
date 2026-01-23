#include<iostream>

using namespace std;

int main(){
    int sc;

    cin >> sc;

    for(int i = 0; i < 10000; i++){
        if(i % sc == 2){
            cout << i << endl;
        }
    }
}