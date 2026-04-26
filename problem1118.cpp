

#include <bits/stdc++.h>

using namespace std;

int main(){

    float n1, n2, m;
    int f;
    do
    {
    
    do
    {
    cin >> n1;

    if (n1 < 0 || n1 > 10)
    {
        cout <<  "nota invalida" << endl;
    }
    }while (n1 < 0 || n1 > 10);

    do
    {
    cin >> n2;

    if (n2 < 0 || n2 > 10)
    {
        cout <<  "nota invalida" << endl;
    }
    }while (n2 < 0 || n2 > 10);

    m = (n1 + n2) / 2;
    cout << "media = " << fixed << setprecision(2) << m << endl;
    do
    {
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> f;
    } while (f != 1 && f != 2);

    } while (f != 2);
    
    
    return 0;
}

