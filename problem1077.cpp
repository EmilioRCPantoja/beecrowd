#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s,res="";
        getline(cin, s);
        stack<char> p;
        map<char , int> pre;
        pre['*'] = 2;
        pre['/'] = 2;
        pre['+'] = 1;
        pre['-'] = 1;
        pre['^'] = 3;
        pre['('] = 0;

        for(char c : s){
            if(isalnum(c)){
                res += c;
            }
            else if (c == '(')
                p.push(c);
            else if( c == ')'){
                while(!p.empty() && p.top() != '('){
                    res += p.top();
                    p.pop();
                }
                if(!p.empty())
                    p.pop();
            }
            else if(pre.count(c)){
                while(!p.empty() && pre[p.top()] >= pre[c]){
                    res+=p.top();
                    p.pop();
                }
                p.push(c);
            }
        }

        while (!p.empty()) {
            res += p.top();
            p.pop();
        }

        cout << res << endl;
    }
}