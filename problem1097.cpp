#include<bits/stdc++.h>

using namespace std;

int main(){

    int i = 1, j = 7, k = 7;

    while(i<=9){

        cout << "I=" << i << " J=" << j << endl;

        if(j == k-2){
            i+=2;
            k=j+4;
            j=k;
        }
        else{
            j-=1;
            
        }
        
    }


}