#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    do
    {
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            if (i == x)
            {
                cout << i << endl;
            } else
            {
                cout << i << " ";   
            }
        }
        
    } while (x != 0);
    
    

 
}

