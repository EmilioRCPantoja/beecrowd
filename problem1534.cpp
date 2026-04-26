#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while (cin >> n)
    {
    
        int matriz[100][100];
        int ini = 0, f = n;
    
        for (int i = ini; i < f; i++)
        {
            for (int j = ini; j < f; j++)
            {
                if (i + j == (n - 1))
                {
                    matriz[i][j] = 2;
                } else if (i == j)
                {
                    matriz[i][j] = 1;
                } else
                {
                    matriz[i][j] = 3;
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matriz[i][j];
                
            }
            cout << endl;
        }
    }        

    
}

