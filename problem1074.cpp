#include<iostream>

using namespace std;

int main(){
    int scn = 0, qnt = 0;

    string out = "";

    cin >> qnt;

    for(int i = 0; i < qnt; i++){

        cin>>scn;

    if(scn % 2 != 0 ){

        out+="ODD";
    }
    else if(!(scn == 0)){
        out+="EVEN";
    }

    if(scn > 0){
        out+=" POSITIVE\n";
    }
    else if(scn < 0){
        out+=" NEGATIVE\n";
    }

    if(scn == 0){
        out += "NULL\n";
    }

    }

    cout << out;
}