#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, m; cin >> n >> m;
    int p; cin >> p;
    n--;
    ll step = 0;
    while (n--){
        int k; cin >> k;
        while (k<=p){
            k+=m;
            step++;
        }
        p = k;
    }
    cout << step << endl;
    return 0;
}