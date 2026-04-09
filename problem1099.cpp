#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i =0; i < n; i++){
        int x ,y , z = 0;

        cin >> x >> y;

        if(x > y){
            x +=y;
            y = x-y;
            x = x-y;
        }

        int w = x;

        for(w; w<y;w++){
            if(w%2 != 0 && w != x){
                z+=w;
            }
        }
        cout << z << endl;
    }

}