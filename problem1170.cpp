#include<iostream>


using namespace std;

int main(){
    double a, b,c;

    cin >> c;

    for(int i = 0; i < c; i++){
    
        cin >> a;

        while(a > 1){
            a/=2;
            b++;
        }

        cout << b << " dias"<< endl;
        b = 0;
    }
}
