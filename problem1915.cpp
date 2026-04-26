#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n, a, b;
    cin >> n;

    for(int i = 0; i < n; i++) {

        char nome1[100], nome2[100], escolha1[100], escolha2[100];

        cin >> nome1 >> escolha1 >> nome2 >> escolha2 >> a >> b;

        int soma = a + b;

        int p = 0;

        if (escolha1[0] == 'P') {
            p = 0; // ESCOLHA 1 = PAR
        } else {
            p = 1; // ESCOLHA 2 = PAR
        }

        if ((soma % 2) == 0) {
            if (p == 0) {
                cout <<nome1 << endl; 
            } else {
                cout << nome2 << endl;
            }
        } else {
            if (p == 1) {
                cout <<nome1 << endl;
            } else {
                cout <<nome2 << endl;
            }
        }

    }
    return 0;
}