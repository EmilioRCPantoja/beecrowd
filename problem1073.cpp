#include <iostream>

using namespace std;

int main(){
    int num,i;

    cin >> num;

    for(i=2; i <= num; i+=2){
        cout << i << "^2"  << " = " << i*i << endl;
    }
}