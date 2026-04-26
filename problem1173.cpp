#include <bits/stdc++.h>

using namespace std;

int main(){

    int x[10];
    int n;
    cin >> n;

    x[0] = n;
    cout <<"N[0] = " << n << endl; 

    for (int i = 1; i < 10; i++)
    {
        n *= 2;
        x[i] = n;
        cout <<  "N[" << i << "] = " << x[i] << endl;
    }
 
    
}