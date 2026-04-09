#include<bits/stdc++.h>

using namespace std;

int main(){
    int nc, cont = 0;

    cin >> nc;

    for(int i = 1; i <= nc; i++){
        int n, k, s = 0;
        cin >> n >> k;
        
        for(int j = 2; j <= n; j++ ){
            s=(s+k)%j;
        }

        cout << "Case " << i << ": "<< s+1 <<endl;


    }

}