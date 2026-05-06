#include <bits/stdc++.h>

using namespace std;

int main(){

    string p;
    char bi[4];
    int dec, c = 0, s = 0;

    while (c < 3)
    {
        getline(cin, p);
        if (p == "caw caw") {
            cout << s << endl;
            s = 0;   
            c++;     
        } else {
            int dec = 0;
            
            if (p[0] == '*') dec += 4; 
            if (p[1] == '*') dec += 2; 
            if (p[2] == '*') dec += 1; 
            
            s += dec;
        } 
    }

    
}