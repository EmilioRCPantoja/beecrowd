#include<bits/stdc++.h>

using namespace std;

int main() {
    int C; 
    if (!(cin >> C)) return 0;

    while (C--) {
        int N;
        cin >> N;

        vector<int> notas(N);
        double soma = 0;

        for (int i = 0; i < N; i++) {
            cin >> notas[i];
            soma += notas[i];
        }

        double mediaTurma = soma / N;

        int acimaDaMedia = 0;
        for (int i = 0; i < N; i++) {
            if (notas[i] > mediaTurma) {
                acimaDaMedia++;
            }
        }

        double percentual = (double)acimaDaMedia / N * 100;

        cout << fixed << setprecision(3) << percentual << "%" << endl;
    }

}