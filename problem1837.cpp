#include<bits/stdc++.h>

using namespace std;;

int main(){
    int a, b;

    cin >> a >> b;

    int q, r;

    q = a / b;
    r = a % b;

    if(r < 0){
        if(b > 0){
            q--;
            r += b;
        }
        else{
            q++;
            r-=b;
        }
    }

    cout << q << " " << r << endl;
}