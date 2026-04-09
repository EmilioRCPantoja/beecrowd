#include<bits/stdc++.h>

using namespace std;

int m;

bool comparador(int a, int b) {
    int modA = a % m;
    int modB = b % m;

    if (modA != modB) {
        return modA < modB;
    }

    bool aImpar = abs(a % 2) == 1;
    bool bImpar = abs(b % 2) == 1;

    if (aImpar && !bImpar) return true;
    if (!aImpar && bImpar) return false;

    if (aImpar && bImpar) {
        return a > b;
    }

    return a < b;
}

int main(){
    int n, mm;

    while(cin >> n >> mm){
        m = mm;
        
        cout << n << " " << m << endl;
        
        if(n==0 & mm == 0)
            break;

        vector<int> v;
        for(int i = 0; i < n; i++){
            int p;
            cin >> p;
            v.push_back(p);
        }

        sort(v.begin(),v.end(),comparador);

        for(int i = 0; i < n; i++){
            cout << v[i] << endl;
        }

    }


}