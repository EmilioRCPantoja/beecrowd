#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int t[n];

    for (int i = 0; i < n; i++)
        cin >> t[i];

    int m = t[0];
    int p = 1;

    for (int i = 0; i < n; i++)
    {
        if (t[i] < m)
        {
            m = t[i];
            p = i + 1;
        }  
    }
    
    cout << p << endl;

    
}