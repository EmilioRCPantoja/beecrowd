#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,m;

    while(cin >> n >> k >> m && (n != 0 || k != 0 || m != 0) ){
        int est1, est2, rest;
        vector<int> fila(n);
          for(int j = 0; j < n; j++){
            fila[j] = j+1;
        }

        rest = n;
        est1 = 0;
        est2 = n-1;

        while(rest > 0){
            int cand = 0;

            while(cand <k){
                if(fila[est1] > 0)
                    cand++;
                if(cand < k)
                    est1 = (est1 + 1)%n;
            }

            cand = 0;

            while(cand < m){
                if(fila[est2] > 0)
                    cand++;
                if(cand < m)
                    est2 = (est2 - 1 + n)%n;
            }
            if(est1 == est2){
                cout << right << setw(3) << fila[est1];
                rest --;
            }
            else{
                cout << right << setw(3) << fila[est1] << right << setw(3) << fila[est2] ; 
                rest -=2;
            }

            fila[est1] = 0;

            fila[est2] = 0;

            if(rest > 0)
                cout << ",";

        }
        cout << endl;
    }
}