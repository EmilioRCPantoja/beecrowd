#include<bits/stdc++.h>

using namespace std;

int main(){
    double n, i = 0, res = 0;
    while(cin >> n && n > 0){
        res+= n;
        i++;
    }

    cout << fixed << setprecision(2) <<  (res/=i) << endl;

}