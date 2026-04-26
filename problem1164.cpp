#include<bits/stdc++.h>

using namespace std;

int div(int n){
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i != n)
        {
            res+=i;
        }    
    }
    return res;
}

int main(){

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int n;
        cin >> n;

        if(div(n) == n)
            cout << n << " eh perfeito" << endl;
        else
            cout << n << " nao eh perfeito" << endl;
            
    }

}