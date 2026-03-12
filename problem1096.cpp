#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int i = 1, j = 7;

    while(i<=9){

        cout << "I=" << i << " J=" << j << endl;

        if(j == 5){
            i+=2;
            j=7;
        }
        else{
            j-=1;
        }
    }


}