#include <bits/stdc++.h>

using namespace std;

int main(){

    int X, Y, S = 0;
    cin >> X >> Y;

    if (X > Y){
        X = X + Y;
        Y = X - Y;
        X = X - Y;
    }
    
    for (int i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
        {
            S += i;
        }    
    }

    cout << S << endl;

    return 0;
}