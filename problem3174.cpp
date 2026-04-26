#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n, h;
    char e[50], g[50];

    int tb = 0, ta = 0, tm = 0, td = 0;
    cin >> n;
    for(int i = 0; i < n; i++){

        cin >> e >> g >> h;
        


        if(g[0] == 'b'){
            tb += h;
        } else if (g[0] == 'a') {
            ta += h;
        } else if (g[0] == 'm') {
            tm += h;
        } else if(g[0] == 'd') {
            td += h;
        }
    }

    int total;
    total = (tb / 8);
    total += (ta / 4);
    total += (tm / 6);
    total += (td / 12);

    cout << total << endl;
    return 0;
}