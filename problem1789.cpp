#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, l;
    
    while (cin >> n){

        int r = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> l;
            
            if(r < l)
                r = l;
        }
        
        if (r < 10)
            cout << "1" << endl;
        else if (r >= 10 && r < 20)
            cout << "2" << endl;
        else if (r >= 20)
            cout << "3" << endl;
    }


}