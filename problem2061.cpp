#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 0, m;

    cin >> n >> m;

    for(int i = 0; i < m ; i++){
        string a;
        cin >> a;
        if(a[0] == 'f'){
            n+=2;
        }
        n--;
    }
    cout << n << endl;
}