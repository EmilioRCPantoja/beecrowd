#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, cidade = 1;
    bool primeiro = true;

    while (cin >> n && n != 0) {
        if (!primeiro) cout << endl;
        primeiro = false;

        map<int, int> consumos;
        double total_pessoas = 0, total_consumo = 0;

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            int consumo_medio = y / x; 
            
            consumos[consumo_medio] += x;
            total_pessoas += x;
            total_consumo += y;
        }

        cout << "Cidade# " << cidade++ << ":" << endl;

      
        for (auto it = consumos.begin(); it != consumos.end(); ++it) {
            if (it != consumos.begin()) cout << " ";
            cout << it->second << "-" << it->first;
        }
        cout << endl;

        double media = total_consumo / total_pessoas;
        
        cout << "Consumo medio: " << fixed << setprecision(2) << floor(media * 100.0) / 100.0 << " m3." << endl;
    }

}