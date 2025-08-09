#include <iostream>
#include<iomanip>

using namespace std;

int main() {
 
    double a, r, pi;
    cin >> r;
    
    pi = 3.14159;

    a = pi * (r * r);

    cout << "A=" <<setprecision(4) << fixed << a << endl;
 
    return 0;
}