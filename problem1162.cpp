#include<bits/stdc++.h>

using namespace std;

int cont = 0;

void trocar(vector<int>& A, int a, int b){
    int t = 0;
    t = A[a];
    A[a] = A[b];
    A[b] = t;
    cont++;
}

void BubbleSort(vector<int>& A, int tam){

    for(int i = tam-1; i > 0; i--){
        
        for(int j = 0; j < i; j++){
            
            if(A[j] > A[j+1]){

                trocar(A,j,j+1);
            
            }
        }
    }

};

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        vector<int> v;

        int l;
        cin >> l;

        for(int j = 0; j < l; j++){
            int p;
            cin  >> p;
            v.push_back(p);
        }

        BubbleSort(v,v.size());

        cout << "Optimal train swapping takes " << cont << " swaps."<< endl;

        cont = 0;

    }
    
}