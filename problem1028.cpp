#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int f1,f2;
        cin >> f1 >> f2;

        cout << gcd(f1,f2) << endl;
    }
}