#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    cin.ignore();
    for(int i = 0; i < n; i++){
        int cont = 0, a = 0;
        string s;
        getline(cin, s);
        
        for(char c : s){
            if(c == '<')
                a++;
            else if(c == '>'){
                if(a > 0){
                    cont++;
                     a--;
                }
            }
        }

        cout << cont << endl;

    }



}