#include<bits/stdc++.h>

using namespace std;

  int isP(int n){
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        if(isP(m))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;

    }
}