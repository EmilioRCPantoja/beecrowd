#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && (b < c || b == c)) {
        cout << ":)" << endl;
    }

    else if (a < b && (b > c || b == c)) {
        cout << ":(" << endl;
    }

    else if (a < b && b < c) {

        if ((c - b) >= (b - a)) {
            cout << ":)" << endl;
        } else {
            cout << ":(" << endl;
        }
    }

    else if (a > b && b > c) {

        if ((b - c) < (a - b)) {
            cout << ":)" << endl;
        } else {
            cout << ":(" << endl;
        }
    }

    else if (a == b && b < c) {
        cout << ":)" << endl;
    }

    else {
        cout << ":(" << endl;
    }

}