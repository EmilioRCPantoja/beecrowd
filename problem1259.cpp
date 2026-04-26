#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int main(){
   
    ll n;
    cin >> n;
    ll v[n];
    for(int i = 0; i < n; i++)
    {
        ll p;
        cin >> p;

        v[i] = p;
    }
    sort(v, v + n);

    for(int i = 0; i < n; i++){
        if(v[i]%2 == 0){
            cout << v[i] << endl;
        }

    } 

    
    for(int i = n-1; i >= 0; i--){
        if(v[i]%2 != 0){
            cout << v[i] << endl;
        }

    } 

    
}