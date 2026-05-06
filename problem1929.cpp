#include<bits/stdc++.h>

using namespace std;

bool tri(int a, int b, int c){
    if(a+b > c && a+c > b && b+c > b )
        return true;
    return false;
}

int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if( tri(a, b, c) || tri (b,c,d) || tri(a, b, d) || tri(a,c,d) )
        cout << "S";
    else
        cout << "N";
    cout << endl;

}