#include <bits/stdc++.h>

using namespace std;

int main(){

    float s = 0.0, m = 1.0;
    for (int i = 1; i <= 39; i += 2, m *= 2)
    {
        s = s + i / m;
    }
    cout << setprecision(2) << fixed << s << endl;

}