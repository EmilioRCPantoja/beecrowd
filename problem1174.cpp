#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    double x[100];
    double a;

    for (int i = 0; i < 100; i++)
    {
        cin >> a;

        if (a <= 10)
        {
            x[i] = a;
            cout << "A[" << i << "] = " << fixed  << setprecision(1)<< x[i] <<endl;
        } 

    }



}