#include <bits/stdc++.h>

using namespace std;

int main(){

    int i[5], p[5];
    int n, count = 0, par = 0, impar = 0;
   
    while (count < 15)
    {
        cin >> n;
        
        if (par != 5 && n % 2 == 0)
        {
            p[par] = n;
            par++;
        } else if (impar != 5 &&  n % 2 != 0)
        {
            i[impar] = n;
            impar++;
        } 
        
        if (par == 5)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << "par[" << k << "] = " << p[k] <<endl;
            }
            par = 0;
        }
        
        if (impar == 5)
        {
            for (int l = 0; l < 5; l++)
            {
                cout << "impar[" << l << "] = " << i[l] <<endl;
            }
            impar = 0;
        }
        
        count++;
    }

    for (int k = 0; k < impar; k++)
    {
        cout << "impar[" << k << "] = " << i[k] <<endl;
    }

    for (int l = 0; l < par; l++)
    {
        cout << "par[" << l << "] = " << p[l] <<endl;
    }
    

}
