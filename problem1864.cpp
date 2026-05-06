#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;
    string s = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    for(int i = 0; i < n; i++){
        if(i == n-1)
            cout << s[i] << endl;
        else
            cout << s[i];
    }
}