#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    unsigned long long int x[61] = {0, 1};

    for (int i = 2; i <= 60; i++)
    {   
        x[i] = x[i - 1] + x[i - 2];
    }
    
    int a;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        cout  << "Fib(" << a << ") = " << x[a] << endl;  
    }   

}