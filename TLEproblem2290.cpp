#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    while(true){
        ll n;
        cin>>n;
        if(n == 0)
            break;
        vector<ll> nums(n);
        map<ll, ll> freq;
        for(ll i = 0; i < n; i++){
            cin >> nums[i];
        }

        for(ll i : nums){
            freq[i]++;
        }

        vector<ll> res;
     
        for(auto const& [num, cont] : freq){
            if((cont % 2) != 0)
                res.push_back(num);
        }
        

        if (res.size() >= 2) {
            cout << res[0] << " " << res[1] << endl;
        }
        
    }
}