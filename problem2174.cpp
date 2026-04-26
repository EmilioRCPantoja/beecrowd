#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int main(){
   
    set<string> set;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
    
        string s;

        cin >> s;
        set.insert(s);
        
    }
    
    cout << "Falta(m) " << 151 - set.size() << " pomekon(s)." << endl;
}