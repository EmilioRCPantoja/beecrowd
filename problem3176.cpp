#include<bits/stdc++.h>

using ll = long long;

using namespace std;
struct duende{
    int idade;
    string nome;

};

bool compara(const duende& a, const duende& b ){
    if(a.idade!= b.idade ){
        return a.idade > b.idade;
    }
    return a.nome < b.nome;
};

int main(){

    int n;
    cin >> n;
    duende a[n];

    for(int i = 0; i < n; i++){
        string s;
        int id;
        cin >> s >> id;
        
        a[i].idade = id;
        a[i].nome = s;
            
    }

    sort(a, a + n, compara);

    int passo = n/3;

    for (int i = 0; i < passo; i++){
        cout << "Time " << i+1 << endl;
        cout << a[i].nome << " " << a[i].idade << endl;
        cout << a[i + passo].nome << " " << a[i + passo].idade << endl;
        cout << a[i + (passo *2)].nome << " " << a[i + (passo *2)].idade << endl;
        cout << endl;
    }
    
}