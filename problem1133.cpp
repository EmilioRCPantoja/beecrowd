#include<iostream>

using namespace std;

int main(){
    int x, y, i;

    cin >> x;
    cin >> y;

    if(x > y){
        x = x + y;
        y = x - y;
        x = x - y;
    }

    for(i = x + 1 ; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
        }
    }
}