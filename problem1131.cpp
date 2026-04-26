#include <bits/stdc++.h>

using namespace std;

int main(){

    int E = 0, G = 0, I = 0, X, Y, C, GI = 0;

    do
    {
        cin >> X >>  Y;
        GI++;

        if (X == Y)
        {
            E++;
        } else if (Y > X)
        {
            G++;
        } else
        {
            I++;
        }
        
        do
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> C;

        } while (C != 1 && C != 2);
        
        switch (C)
        {
        case 2:
            cout << GI << " grenais" <<endl;
            cout << "Inter:" << I << endl;
            cout << "Gremio:" << G << endl; 
            cout << "Empates:" << E << endl;
            if (G > I)
            {
                cout << "Gremio venceu mais" << endl;
            } else if (G < I)
            {
                cout <<"Inter venceu mais" << endl; 
            } else
            {
                cout <<"Nao houve vencendor" << endl; 
            }
            break;
        
        default:
            break;
        }
    } while (C != 2);

    return 0;
}