#include<bits/stdc++.h>

using namespace std;

int main(){
    int x[10] ,b;

    for(int i = 0; i < 10; i++){
        cin >> b;
        if(b > 0)
            x[i] = b;
        else
            x[i] = 1;

    }

    for(int i = 0; i < 10; i++){
        cout << "X["<<i<<"] = " << x[i] << endl;
    }
}