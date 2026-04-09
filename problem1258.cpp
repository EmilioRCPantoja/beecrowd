#include<bits/stdc++.h>

using namespace std;

struct camisa
{
    string nome;
    string cor;
    char tam;
};

int valorTam(char t) {
    if (t == 'P') return 1;
    if (t == 'M') return 2;
    if (t == 'G') return 3;
    return 0;
}

void trocar(vector<camisa>& A, int a, int b){
    camisa t;
    t = A[a];
    A[a] = A[b];
    A[b] = t;
}

void BubbleSort(vector<camisa>& A, int n){

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bool trocar = false;

            if (A[j].cor > A[j+1].cor) {
                trocar = true;
            } 
            else if (A[j].cor == A[j+1].cor) {
                if (valorTam(A[j].tam) > valorTam(A[j+1].tam)) {
                    trocar = true;
                } 
                else if (A[j].tam == A[j+1].tam) {
                    if (A[j].nome > A[j+1].nome) {
                        trocar = true;
                    }
                }
            }

            if (trocar) {
                swap(A[j], A[j+1]);
            }
        }
    }

};


int main(){
    int n;
    bool prim = true;
    while(cin >> n && n != 0){
        if(!prim)
            cout << endl;
        
        prim = false;

        vector<camisa> c(n); 
        cin.ignore();

        for(int i = 0; i < n; i++){
            getline(cin, c[i].nome); 
            cin >> c[i].cor >> c[i].tam;
            cin.ignore();
        }
        BubbleSort(c, n);

        for (int i = 0; i < n; i++) {
            cout << c[i].cor << " " << c[i].tam << " " << c[i].nome << endl;
        }

    }
}