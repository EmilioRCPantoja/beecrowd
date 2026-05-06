#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while (cin >> n)
    {
        int matriz[n][n];
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matriz[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            matriz[i][i] = 2;
        }

        for (int i = 0; i < n; i++) 
        {
            matriz[i][n - 1 - i] = 3;
        }

        int ini = n / 3;
        int f = n - ini;

        for (int i = ini; i < f; i++)
        {
            for (int j = ini; j < f; j++)
            {
                matriz[i][j] = 1;
            }
        }

        matriz[n / 2][n / 2] = 4;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matriz[i][j];
                
            }
            cout << endl;
        }
        cout << endl;
    }        


}