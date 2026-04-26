#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, i = 1, m = 0;
    cin >> n;

    do
    {
        cout << i << " " << 1 + i << " " << 2 + i << " PUM" << endl;
        i += 4;
        m++;
    
    } while (m != n);
    
}