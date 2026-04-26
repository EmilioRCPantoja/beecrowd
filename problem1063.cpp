#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
    while (cin >> n && n != 0) {

        vector<char> vg(n);
        vector<char> obj(n);

        for (int i = 0; i < n; i++) {
            cin >> vg[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> obj[i];
        }

        stack<char> estacao;
        int i = 0;
        int j = 0;
        bool possivel = true;

        while (j < n) {
            if( !estacao.empty() && estacao.top() == obj[j]){
                estacao.pop();
                cout << "R";
                j++;
                
            }

            else if(i < n){
                estacao.push(vg[i]);
                cout << "I";
                i++;
                
            }
            else{
                cout << " Impossible";
                break;
            }
        }
        cout << endl;
    }
    
}
