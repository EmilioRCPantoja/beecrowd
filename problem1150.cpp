#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, s = 0, i = 0;
    cin >> x;
    int temp = x;

    do
    {
        cin>>y;
    } while (x >= y);

    do
    {
        s += temp;
        i++; temp++;
        
    } while (s <= y);
    
    cout << i << endl;
}

