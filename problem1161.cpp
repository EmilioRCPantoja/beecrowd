#include<bits/stdc++.h>

using namespace std;

long long fatorial(long long n){
    
    if(n == 0){
        return 1;
    if(n == 1)
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}


int main(){
    long long n, m;
    while(cin >> n >> m){
        cout<< fatorial(n) + fatorial(m) << endl;
    }
}