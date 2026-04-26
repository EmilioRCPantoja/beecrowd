#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int main(){

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int m;
        int count = 0;
        cin >> m;
        
        int a[m];
        int b[m];

        for (int j = 0; j < m; j++){
            int l;
            cin >> l;
            a[j] = l;
            b[j] = l;
        }

        sort(a,a+m, greater<int>());

        for(int k = 0; k < m; k++){
            if (a[k] == b[k])
            {
                count++;
            }
            
        }

        cout << count << endl;
    }
    
    

}