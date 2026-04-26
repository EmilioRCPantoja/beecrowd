#include<bits/stdc++.h>

using namespace std;

vector<int> somaf(int d1, int n1, int d2, int n2){

    vector<int> d(2);

    d.push_back((n1 * d2) + (n2 * d1));
    d.push_back(d1 * d2);

    return d;

}

vector<int> subf(int d1, int n1, int d2, int n2){

    vector<int> d(2);

    d.push_back((n1 * d2) - (n2 * d1));
    d.push_back(d1 * d2);

    return d;

}

vector<int> multf(int d1, int n1, int d2, int n2){

    vector<int> d(2);

    d.push_back(n1 *n2);
    d.push_back(d1 * d2);

    return d;

}

vector<int> divf(int d1, int n1, int d2, int n2){

    vector<int> d(2);

    d.push_back(n1 * d2);
    d.push_back(n2 * d1);

    return d;

}

int main(){

    int n;
    cin >> n;

    for(int i  = 0; i < n; i++){
        int n1, d1, n2, d2;
        char b1, op, b2;


        cin >> n1 >> b1 >> d1 >> op >> n2 >> b2 >> d2;
        
        vector<int> div;
        switch (op)
        {
        case '+':
            div = somaf(d1, n1, d2, n2);
            break;
        case '-':
            div = subf(d1, n1, d2, n2);
            break;
        case '*':
            div = multf(d1, n1, d2, n2);
            break;
        case '/':
            div = divf(d1, n1, d2, n2);
            break;
        
        default:
            break;
        }

        int m = gcd(div[2], div[3]);

        cout << div[2] << "/" << div[3] << " = " << div[2]/m << "/" << div[3]/m << endl;

    }

}