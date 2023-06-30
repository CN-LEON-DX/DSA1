#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    if (n<10){
        return false;
    }
    int last = n%10;
    n/=10;
    while (n){
        if (last < n%10) return false;
        n/=10;
    }
    return true;
}
int main(){
    int k;
    map<int, int> mp;
    vector<int> a;
    while (cin >> k){
        if (check(k)){
           a.push_back(k);
           mp[k]++;
        }
    }
    cout << endl;
    for (int x : a){
        if (mp[x]){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}