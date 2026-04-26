

#include <bits/stdc++.h>

using namespace std;

int main(){

   
    double n;
    cin >> n;
  

    for (int i = 0; i < 100; i++)
    {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << n << endl;
        n/=2;
    }
    
}

