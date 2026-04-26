#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    float X, Y, D;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y;
        
        if (Y == 0)
        {
            
            cout <<"divisao impossivel"<<endl;
        } else {

            D = X / Y;
            cout << fixed << setprecision(1) << D <<endl;
        }
    }
    
    return 0;
}

