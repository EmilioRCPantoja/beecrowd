#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int main(){

    int n;
    
    while (cin >> n && n != 0)
    {
        bool d = true;
        queue<int> p;
        for(int i = 1; i <= n; i++){
            p.push(i);
        }
        
        cout << "Discarded cards:";

        while(p.size() >= 2){
            if(d){
                cout << " " << p.front();
                if (p.size() > 2)
                {
                    cout << ",";
                }
                p.pop();
                d = false;
            }
            else
            {
                int numero = p.front();
                p.pop();
                p.push(numero);
                d = true;
            }
        }
        cout << endl;

        cout << "Remaining card: " << p.front() << endl; 
    }
    
    

}