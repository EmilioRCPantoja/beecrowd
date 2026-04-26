#include <bits/stdc++.h>

using namespace std;

int main(){

    int l;
    cin >> l;
    char cal;
    cin >> cal;

    double matriz[12][12];

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> matriz[i][j];
        } 
    }

    double s = 0, m = 0;

    switch (cal)
    {
    case 'S':

        for (int i = 0; i < 12; i++)
        {
            s += matriz[l][i]; 
        }

        cout << fixed << setprecision(1) << s << endl;
        break;
    
    case 'M':

        for (int i = 0; i < 12; i++)
        {
            s += matriz[l][i];
        }

        m = s / 12;
        cout << fixed << setprecision(1) << m << endl;
        break;
    }

 
}