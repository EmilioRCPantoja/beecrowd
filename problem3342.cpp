#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int m = (n*n)/2;

    if((n*n)%2 == 0)
        cout << m  << " casas brancas e " << m << " casas pretas" << endl;
    else
        cout << m+1  << " casas brancas e " << m << " casas pretas" << endl;

    }