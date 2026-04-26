#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll fatorial(ll n) {
    ll res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main(){
    ll n, s = 0, res;
    map<string, int> ba;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        string a;
        ll b;

        cin >> a >> b;

        s+=b;

        ba[a] += b;

    }
    
    res = fatorial(s);

    for(auto const& [cor, qntd] : ba){
        res /= fatorial(qntd);
    }
    cout << "Feliz aniversario Tobias!" << endl;
    cout << res <<endl;  
}