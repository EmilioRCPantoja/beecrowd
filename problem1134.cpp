#include <bits/stdc++.h>

using namespace std;

int main(){

    int C, G = 0, D = 0, A = 0; 
    

    while (C != 4)
    {
        cin >> C;
        switch (C)
    {
    case 1:
        A++;
        break;
    
    case 2:
        G++;
        break;
    
    case 3:
        D++;
        break;
    
    case 4:
        break;;
    } 
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << A << endl;
    cout << "Gasolina: " << G << endl;
    cout << "Diesel: " << D << endl;
    
    return 0;
}