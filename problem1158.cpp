#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, y, c = 0;
    cin >> n;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        c = 0;

        if (x % 2 == 0)
        {
            x++;
        }
        do
        {
            s += x;
            x += 2;
            c++;
        } while (c < y);
        cout << s << endl;
        s = 0;
    }
    
}

