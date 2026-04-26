#include<bits/stdc++.h>

using namespace std;

int ultimos[] = {1,1,2,6,4,2,2,4,2,8};

int ufat(int n){
    
    if(n < 10){
        return ultimos[n];
    }

    if(((n/5)%2) == 0)
        return (6*ufat(n/5))* ultimos[n%10]%10;
    else
        return (4*ufat(n/5))* ultimos[n%10]%10;
}

int main(){
    int n;
    int i = 1;

    while(cin >> n){
        
       cout << "Instancia " << i <<endl << ufat(n) << endl<<endl;
       i++;
    }

}