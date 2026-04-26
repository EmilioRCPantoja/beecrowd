#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        int a = 0; 
        bool e = false;
        for(char c : s){
            if(c == ')' && a == 0){
                e = true;
                break;
            }
            else if(c == '(')
                a++;
            else if(c == ')' && a > 0)
                a--;
                
        }
        if(a == 0 && !e )
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
}