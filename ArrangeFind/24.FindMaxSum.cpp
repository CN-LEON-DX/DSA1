#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, m; cin >> n >> m;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a+n, greater<int>());
    ll sum = a[0];
    for (int i=1;i<n;i++){
        if (m--){
            sum+=a[i];
        }
        else sum -= a[i];
    }
    cout << sum << endl;
    return 0;
}