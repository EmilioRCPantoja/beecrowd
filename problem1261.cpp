#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    ll n, m;
    cin >> n >> m;
    map<string, ll> hp;

    for(int i = 0; i<n; i++){
        string s;
        ll a;

        cin >> s >> a;

        hp[s] = a;
    }

    for(int i = 0; i < m; i++){
        ll cont = 0;
        string t;

        while(cin >> t && t != ".")
        {
            if(hp.count(t)){
                cont += hp[t];
            }
        }

        cout << cont << endl;

    }

}