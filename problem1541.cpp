#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int a, b, c; 
    double ac, pc, at, lt;
    
    while (cin >> a && a != 0)
    {
        cin >> b >> c;

        ac = (a * b);
    
        pc = (c / 100.0);

        at = (ac / pc);

        lt = sqrt(at);

        cout << (int) lt << endl;
        
    }
}

