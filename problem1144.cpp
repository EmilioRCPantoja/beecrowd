#include<bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long n;
    cin >> n;

    for (float i = 1; i <= n; i++)
    {
        cout << i << " " << pow(i,2) << " " << fixed << setprecision(0) << pow(i,3) << endl;
        cout << i << " " << pow(i,2) + 1 << " " << fixed << setprecision(0) << pow(i,3) + 1 << endl;
    }
    
}