#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, n, t = 0;
    cin >> a;
    do
    {
        cin >> n;
    } while (n <= 0);

    for (int i = a; i < (a + n); i++)
    {
        t += i;
    }
    cout << t << endl;
}