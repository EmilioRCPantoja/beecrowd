

#include <bits/stdc++.h>

using namespace std;

int main(){

    char cal;
    cin>> cal;

    double matriz[12][12];

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> matriz[i][j];
        } 
    }

    double s = 0, m = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if(i<j)
                s += matriz[i][j];
        }
        
    }
    
    switch (cal)
            {
            case 'S':
                cout << fixed << setprecision(1) << s << endl;
                break;
    
            case 'M':
            
            m = s /66;
            cout << fixed << setprecision(1) << m << endl;
            break;
            }
    



}

