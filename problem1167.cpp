#include<bits/stdc++.h>

using namespace std;

struct crianca {
    string no;
    int v;
};

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<crianca> cir(n);
        for (int i = 0; i < n; i++) {
            cin >> cir[i].no >> cir[i].v;
        }

        int at = 0;
        int vf = cir[0].v;
        
    while (cir.size() > 1) {
        if (vf % 2 != 0) {
            at = (at + vf) % cir.size();
        } 
        else {
            at = (at - (vf % (int)cir.size())) % (int)cir.size();
            if (at < 0) 
                at += cir.size();
        }

        vf = cir[at].v;
        cir.erase(cir.begin() + at);

        if (vf % 2 != 0) at--;
        
        if (at < 0) at = cir.size() - 1;
        if (at >= (int)cir.size()) at = 0;
}

        cout << "Vencedor(a): " << cir[0].no << endl;
    }
    return 0;
}