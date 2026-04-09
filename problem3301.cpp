#include<bits/stdc++.h>

using namespace std;

int main(){
    int h, z ,l, s;
    cin >> h >> z >> l;

    s = h + z + l;

    if(s-z == 2*z)
        cout << "zezinho" << endl;
    else if(s-h == 2*h)
        cout << "huguinho" << endl;
    else if(s-l == 2*l)
        cout << "luisinho" << endl;


}