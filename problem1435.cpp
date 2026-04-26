

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while (true)
    {
        cin>>n;
        if (n == 0)
        {
            break;
        }

        int matriz[100][100];
        int v = 1, ini = 0, f = n;

        while (ini < f)
        {
            for (int i = ini; i < f; i++)
            {
                for (int j = ini; j < f; j++)
                {
                    matriz[i][j] = v;
                }
            }
            
            ini++;
            f--;
            v++;
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    cout << setw(3) <<matriz[i][j]; 
                } else
                {
                    cout <<" "<< setw(3) <<matriz[i][j];
                }
            }
            cout << endl;
        }
        cout  << endl;
    }        

    
}

