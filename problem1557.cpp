#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while (cin >> n && n!=0)
    {

        int matriz[100][100];
        int ini = 0, f = n;

        for (int i = ini; i < f; i++)
        {
            for (int j = ini; j < f; j++)
            {
                matriz[i][j] = (int)pow(2, i + j);
            }
        }

        int t = 0;
        int m = pow(2, (n - 1) + (n - 1));

        while (m > 0) {
            m = m / 10;
            t++;
        }

        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    cout << setw(t) << matriz[i][j];
                } else
                {
                    cout << " " << setw(t) << matriz[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }        

    
}

