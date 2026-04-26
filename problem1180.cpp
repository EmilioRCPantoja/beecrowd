#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, b = INT_MAX, p;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i< n; i++){
        int c;
        cin >> c;
        if(c < b){
            b = c;
            p = i;
        }
        
        a[i] = c;
        
    }

    cout << "Menor valor: " << b << endl;
    cout << "Posicao: " << p << endl;

}