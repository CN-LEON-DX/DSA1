#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n, p; cin >> n >> p;
    unordered_set<int> a; unordered_set<int> b;
    for (int i=0;i<n;i++) {
        int k; cin >> k;
        a.insert(k);
    }
    for (int i=0;i<p;i++){
        int k; cin >> k;
        b.insert(k);
    }
    for (int x : a){
        if (b.count(x)>0){
            cout << x << " ";
        }
    }
    return 0;
}