#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    bool prim = true;

    while(getline(cin, s)){
        if(!prim)
            cout << endl;
        prim = false;
        map<char, int> fr;
        for(char c: s){
            fr[c]++;
        }

        vector< pair<int, int > > par;

        

        for(auto const&[ch, cont] : fr){
            int i = ch;
            par.push_back(make_pair(i,cont));
        }

        sort(par.begin(), par.end(), [](const auto &a, const auto &b) { if (a.second != b.second) {return a.second < b.second;}
        return a.first > b.first;});
        
        for(const auto &p : par){
            cout << p.first << " " << p.second << endl;
        }
        
    }
}