#include<bits/stdc++.h>

using namespace std;

int main(){
    int x ,y , z = 0;
    while(cin >> x >> y && (x>0 && y >0)){
        if(x > y){
            x +=y;
            y = x-y;
            x = x-y;
        }

        int w = x;

        for(w; w<=y;w++){
           cout << w << " ";
           z+=w;
        }
        cout << "Sum = " << z << endl;

        z =0;

    }

}