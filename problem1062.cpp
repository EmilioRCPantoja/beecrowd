#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
    while (cin >> n && n != 0) {
        while (true) {
            vector<int> vg(n);
            cin >> vg[0];
            
            if (vg[0] == 0) break;

            for (int i = 1; i < n; i++) {
                cin >> vg[i];
            }

            stack<int> estacao;
            int vgatual = 1;
            int saida = 0;

            while (vgatual <= n) {
                estacao.push(vgatual);
                
                while (!estacao.empty() && estacao.top() == vg[saida]) {
                    estacao.pop();
                    saida++;
                }
                vgatual++;
            }

            if (saida == n) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
        cout << endl;
    }
}