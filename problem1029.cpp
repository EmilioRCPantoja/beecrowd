#include<bits/stdc++.h>

using namespace std;


int cont = 0;
int c = 0;

int fib(int n){
    if(n == 0){
        c++;
        return 0;
    }
    if (n == 1){
        cont++;
        c++;
        return 1;
    }
    c++;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >>n;

    for(int i = 0; i < n; i++){
        int a;
        cin >>a;
        fib(a);
        cout<< "fib(" << a << ") = " << c -1 << " calls = "<<cont << endl; 
        c =0 ;
        cont = 0;
    }
}