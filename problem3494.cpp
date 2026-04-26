#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    
    cin >> s >> t;
    int cont = 0;
    for(int i = 0; i < s.size(); i++){
        int a, b;
    
        a = abs(t[i] - s[i]);

        b = min(a, 26 - a);
        
        cont += b;
    }
    char v = 97;
    cout << cont << endl;
}