#include<bits/stdc++.h>

using namespace std;

int main(){

    int x, y;
    cin >> x >>y;

    for (int i = 1; i <= y;)
    {
        for (int j = 0; j < x; j++)
        {
            cout << i;
            if (j != x - 1)
                cout << " ";
            i++;
        }
        cout << endl;
    }
    

    return 0;
}