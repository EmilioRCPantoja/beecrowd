#include<bits/stdc++.h>

using namespace std;


void troca(vector<string>& A, int a, int b){
    string t = "";
    t = A[a];
    A[a] = A[b];
    A[b] = t;
}

void BubbleSort(vector<string>& A, int tam){

    for(int i = tam-1; i > 0; i--){
        
        for(int j = 0; j < i; j++){
            
            if(A[j].size() < A[j+1].size()){

                troca(A,j,j+1);
            
            }
        }
    }

};

int main(){
    int n;

    cin >> n;
    cin.ignore();


    for (int i = 0; i < n; i++){
        string l, w;
        getline(cin, l);
        stringstream s(l);
        vector<string> ss;

        while(s >> w){
            ss.push_back(w);
        }


        BubbleSort(ss,ss.size());

        for(int j = 0; j < ss.size();j++ ){
            cout << ss[j];
            if((j==ss.size()-1))
                cout << "";
            else
                cout << " ";
        

        }
        cout << endl;
    }
}