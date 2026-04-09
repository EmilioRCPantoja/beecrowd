#include<bits/stdc++.h>

using namespace std;

long long cont = 0;


void Merge(vector<int>& A, int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r -q;

    vector<int> L(n1+1);
    vector<int> R(n2+1);

    for(int i = 0; i < n1 ; i++){
        L[i] = A[p+i];
       
        
    }
    for(int j = 0; j < n2 ; j++ ){
        R[j] = A[q + j + 1];
       
    }

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;


    int i = 0;
    int j = 0;

    for(int k = p; k <= r; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            cont+=(n1-i);
            j++;
        }
    
    }

}

void MergeSort(vector<int>& A, int IndInicial, int Tamanho){
    if(IndInicial < Tamanho){
        int meio = IndInicial + (Tamanho - IndInicial)/2;
        MergeSort(A,IndInicial,meio);
        MergeSort(A,meio+1,Tamanho);
        Merge(A,IndInicial,meio,Tamanho);
    }

}


int main(){
    
    int n;
    while(cin >> n && n!=0){
        vector<int> v(n);
        cont = 0;

        for(int j = 0; j < n; j++){
            cin  >> v[j];
            
        }

        MergeSort(v,0,n-1);

        if(cont % 2 == 0)
            cout << "Carlos" << endl;
        else
            cout << "Marcelo" << endl;
        
            

    }
    
}