#include<bits/stdc++.h>

using namespace std;

bool isP(int n){
    if (n < 2) return false; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++ ){
        int m;
        cin >> m;

        cout << m;
        if(isP(m))
            cout << " eh primo";
        else
            cout << " nao eh primo";
        cout << endl;
    }
}

