#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        char s[1000];
        cin >> s;
        int r = 0;

        if(s[0] == 'P'){
            cout << "skipped" << endl;
        }
        else{
            char* tk1 = strtok(s,"+");
            char* tk2 = strtok(NULL,"+");
            int a = *tk1 - '0';
            int b = *tk2 - '0';
            r = a + b;
            cout << r << endl;
        }
    }
}