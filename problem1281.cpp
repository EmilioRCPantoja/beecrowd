#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int np;
        cin >> np;
        float total = 0;
        map<string, float> produtos;

        for(int i=0; i < np; i++){
            string nome;
            float valor;

            cin >> nome >> valor;

            produtos.insert({nome, valor});
        }

        cin >> np;
        for(int i=0; i < np; i++){
            string nome;
            int quantidade;

            cin >> nome >> quantidade;

            total += produtos[nome] * quantidade;
        }

        cout << "R$ " << fixed << setprecision(2) << total << endl;

            
    }

}