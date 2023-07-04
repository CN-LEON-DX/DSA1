#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    map<int, int> mp;
    for (int i=0;i<n;i++){
        int k; cin >> k;
        mp[k]++;
    }
    ll cnt = 0;
    for (auto x : mp){
        if (x.second >= 2){
            cnt+= 1ll*x.second*(x.second-1)/2;
        }
    }
    cout << cnt << endl;
    cout << cnt << 
    return 0;
}